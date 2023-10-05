#include "./include/packetVisitor.h"
#include <iostream>
#include "packetVisitor.h"

using namespace std;

PacketVisitor::PacketVisitor(IOUtils &ioUtils)
{
    this->ioUtils = ioUtils;
}
// this function should print to the output file
void PacketVisitor::visit(RawEthernet &packet){
    ioUtils.
    ioUtils->writeToFile("RawEthernet packet visited");
}

// this function should print to the output file
void PacketVisitor::visit(ECPRI &packet){
    ioUtils->writeToFile("ECPRI packet visited");
}