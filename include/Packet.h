#ifndef PACKET_H
#define PACKET_H

#include <string>
using namespace std;

#include "parser.h"

class Packet
{

private:
    string CRC;
    string destinationAddress;
    string sourceAddress;
    string packetType;

    int ID;
    static int IDCounter;

    void handleCommonData();

protected:
    Parser parser;

public:
    Packet(Parser parser);
    void setCRC(string CRC);
    void setDestAddress(string destinationAddress);
    void setSourceAddress(string sourceAddress);
    void setPacketType(string packetType);

    string getWholePacket();
    string getCRC();
    string getDestAddress();
    string getSourceAddress();
    string getPacketType();
    string getID();
};

#endif // PACKET_H
