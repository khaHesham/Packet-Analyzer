#ifndef ETHERNET_PACKET_H
#define ETHERNET_PACKET_H

#include "packet.h"

class RawEthernet : public Packet, public Visitable
{
private:
    string data;

public:
    void setData(string data);
    void accept(Visitor &visitor);
    string getData();
};

#endif // ETHERNET_PACKET_H
