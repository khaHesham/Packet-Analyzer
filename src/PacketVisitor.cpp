#include "./include/packetVisitor.h"
#include <iostream>

using namespace std;

// this function should print to the output file
void PacketVisitor::visit(RawEthernet packet){
    cout << "RawEthernet packet visited" << endl;
}

// this function should print to the output file
void PacketVisitor::visit(ECPRI packet){
    cout << "ECPRI packet visited" << endl;
}