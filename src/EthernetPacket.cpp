#include "../include/ethernetPacket.h"


void RawEthernet::accept(Visitor& visitor){
    visitor.visit(*this);
}
