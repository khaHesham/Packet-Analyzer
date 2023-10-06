#include <iostream>
#include <string>
#include <vector>

#include "../include/packetVisitor.h"
#include "../include/parser.h"
#include "../include/ecpriEthernetPacket.h"
#include "../include/ethernetPacket.h"
#include "../include/utils.h"

using namespace std;

int main()
{

    string inputFilePath = "io/input_packets";
    string outputFilePath = "io/out_packets";

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
