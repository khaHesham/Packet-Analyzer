#include "../include/packetVisitor.h"

#include <iostream>

using namespace std;

// this function should print to the output file
void PacketVisitor::visit(ECPRI &packet)
{
    ioUtils->writeToFile("packet # " + packet.getID() + ":");
    ioUtils->writeToFile(packet.getWholePacket());
    ioUtils->writeToFile("CRC: " + packet.getCRC());
    ioUtils->writeToFile("Concatenation Indicator: " + packet.getConcatIndicator());
    ioUtils->writeToFile("Destination Address: " + packet.getDestAddress());
    ioUtils->writeToFile("Message Type: " + packet.getMessageType());
    ioUtils->writeToFile("Payload Size: " + packet.getPayloadSize());
    ioUtils->writeToFile("Protocol Version: " + packet.getProtocolVersion());
    ioUtils->writeToFile("RTC ID: " + packet.getRtcID());
    ioUtils->writeToFile("Sequence ID: " + packet.getSequenceID());
    ioUtils->writeToFile("Source Address: " + packet.getSourceAddress());
    ioUtils->writeToFile("Type: " + packet.getPacketType());
    ioUtils->writeToFile("\n*********************************************************************************************************************************************\n");
}

// this function should print to the output file
void PacketVisitor::visit(RawEthernet &packet)
{
    ioUtils->writeToFile("packet # " + packet.getID() + ":");
    ioUtils->writeToFile(packet.getWholePacket());
    ioUtils->writeToFile("CRC: " + packet.getCRC());
    ioUtils->writeToFile("Destination Address: " + packet.getDestAddress());
    ioUtils->writeToFile("Source Address: " + packet.getSourceAddress());
    ioUtils->writeToFile("Type: " + packet.getPacketType());
    ioUtils->writeToFile("\n*********************************************************************************************************************************************\n");
}