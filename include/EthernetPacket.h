#ifndef ETHERNET_PACKET_H
#define ETHERNET_PACKET_H

#include <string>

#include "packet.h"
#include "packetVisitable.h"

using namespace std;

class Visitor;

class RawEthernet : public Visitable, public Packet
{
public:
    RawEthernet(Parser parser) : Packet(parser) {}
    void accept(Visitor &visitor) override;
};

#endif // ETHERNET_PACKET_H
