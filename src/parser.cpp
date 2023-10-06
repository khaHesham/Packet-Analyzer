#include "../include/parser.h"

void Parser::setPacket(string &packet)
{
    this->packet = packet;
}

string Parser::getPacketType() const
{
    return this->packet.substr(40, 4);
}

// this should return only one bit represented as string 0 or 1
string Parser::getConcatIndicator() const
{
    std::string c = packet.substr(45, 1); // Extract 1 characters (1 nibble) at index 45
    int num = std::stoi(c, nullptr, 16);  // Convert hex string to integer 16 for hex

    return std::to_string(num & 1); // Extract the lowest bit as a string
}

string Parser::getCRC() const
{
    // return the last 4 bytes in packet string
    return this->packet.substr(packet.size() - 8, 8);
}

string Parser::getDestAdress() const
{
    // return 6 bytes starting from 8th byte representing the destination address
    return this->packet.substr(16, 12);
}

string Parser::getMessageType() const
{

    return this->packet.substr(46, 2);
}

string Parser::getPayloadSize() const
{
    return this->packet.substr(48, 4);
}

string Parser::getRtcID() const
{
    return packet.substr(52, 4);
}

string Parser::getProtocolVersion() const
{
    return this->packet.substr(45, 1);
}

string Parser::getSequenceID() const
{
    return packet.substr(56, 4);
}

string Parser::getSourceAddress() const
{

    return this->packet.substr(28, 12);
}

// return the data starting from 30th byte to the last 4 bytes (CRC)
string Parser::getData() const
{

    // the -8 for CRC and -60 for the header this ensures we get the data only
    int dataLength = this->packet.size() - 8 - 60;
    return this->packet.substr(60, dataLength);
}

string Parser::getWholePacket() const
{
    return this->packet;
}
