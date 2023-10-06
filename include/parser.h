#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <iostream>

using namespace std;

class Parser
{
private:
    string packet;

public:
    void setPacket(string &packet);

    string getPacketType() const;
    string getConcatIndicator() const;
    string getCRC() const;
    string getPayloadSize() const;
    string getRtcID() const;
    string getProtocolVersion() const;
    string getSequenceID() const;
    string getDestAdress() const;
    string getMessageType() const;
    string getSourceAddress() const;
    string getData() const;
    string getWholePacket() const;
};

#endif // PARSER_H
