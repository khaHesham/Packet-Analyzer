#include "packet.h"


void Packet::setCRC(string CRC){
    this->CRC = CRC;
}

void Packet::setDestAddress(string destinationAddress){
    this->destinationAddress = destinationAddress;
}
void Packet::setSourceAddress(string sourceAddress){
    this->sourceAddress = sourceAddress;
}
void Packet::setPacketType(string packetType){
    this->packetType = packetType;
}

string Packet::getCRC(){
    return this->CRC;
}

string Packet::getDestAddress(){
    return this->destinationAddress;
}

string Packet::setSourceAddress(){
    return this->sourceAddress;
}

string Packet::getPacketType(){
    return this->packetType;
}


