#include "./include/ethernetPacket.h"

void RawEthernet::setData(string data){
    this->data = data;
}

string RawEthernet::getData(){
    return this->data;
}


void RawEthernet::accept(Visitor visitor){
    visitor.visit(*this);
}
