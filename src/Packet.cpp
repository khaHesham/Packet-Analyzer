#include "../include/packet.h"
#include "packet.h"

int Packet::IDCounter = 0;

Packet::Packet(Parser parser)
{
    this->ID = IDCounter++;
    this->parser = parser;
    handleCommonData();
}

void Packet::setCRC(string CRC)
{
    this->CRC = CRC;
}

void Packet::setDestAddress(string destinationAddress)
{
    this->destinationAddress = destinationAddress;
}
void Packet::setSourceAddress(string sourceAddress)
{
    this->sourceAddress = sourceAddress;
}
void Packet::setPacketType(string packetType)
{
    this->packetType = packetType;
}

string Packet::getCRC()
{
    return this->CRC;
}

string Packet::getDestAddress()
{
    return this->destinationAddress;
}

string Packet::getSourceAddress()
{
    return this->sourceAddress;
}

string Packet::getPacketType()
{
    return this->packetType;
}

string Packet::getID()
{
    return std::to_string(this->ID);
}

string Packet::getWholePacket()
{
    return this->parser.getWholePacket();
}

void Packet::handleCommonData()
{
    this->setCRC(this->parser.getCRC());
    this->setDestAddress(this->parser.getDestAdress());
    this->setSourceAddress(this->parser.getSourceAddress());
    this->setPacketType(this->parser.getPacketType());
}