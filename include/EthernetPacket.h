#ifndef ETHERNET_PACKET_H
#define ETHERNET_PACKET_H

#include "packet.h"
#include "packetVisitable.h"
#include "visitor.h"

class RawEthernet : public Packet, public Visitable
{
private:
    string data;

public:
    void setData(string data);
    void accept(Visitor &visitor) override;
    string getData();
};

#endif // ETHERNET_PACKET_H
