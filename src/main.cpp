#include <iostream>
#include <string>
#include <vector>

#include "../include/packetVisitor.h"
#include "../include/parser.h"
#include "../include/ecpriEthernetPacket.h"
#include "../include/ethernetPacket.h"
#include "../include/utils.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Usage: " << argv[0] << " <input_file_path> <output_file_path>" << endl;
        return 1;
    }

    string inputFilePath = argv[1];
    string outputFilePath = argv[2];

    IOUtils ioUtils(inputFilePath, outputFilePath);

    vector<string> packetVector = ioUtils.readPackets();

    Parser parser;
    PacketVisitor packetVisitor(ioUtils);

    for (string packet : packetVector)
    {
        parser.setPacket(packet);
        string packetType = parser.getPacketType();

        if (packetType == "AEFE")
        {
            ECPRI ecepriPacket(parser);
            ecepriPacket.processPacket();
            ecepriPacket.accept(packetVisitor);
        }
        else
        {
            RawEthernet rawEthernetPacket(parser);
            rawEthernetPacket.accept(packetVisitor);
        }
    }

    cout << "Packets processed successfully!" << endl;

    return 0;
}
