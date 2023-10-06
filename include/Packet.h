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
    string data;

    int ID;
    static int IDCounter;

protected:
    Parser parser;

public:
    Packet(Parser parser);
    void setCRC(string CRC);
    void setDestAddress(string destinationAddress);
    void setSourceAddress(string sourceAddress);
    void setPacketType(string packetType);
    void setData(string data);

    void handleCommonData();

    string getData();
    string getCRC();
    string getDestAddress();
    string getSourceAddress();
    string getPacketType();
    string getID();
};

#endif // PACKET_H
