#ifndef PACKET_VISITOR_H
#define PACKET_VISITOR_H

#include "visitor.h"
#include "ethernetPacket.h"
#include "ecpriEthernetPacket.h"
#include "utils.h"

class RawEthernet;
class ECPRI;

class PacketVisitor : public Visitor
{
private:
    IOUtils *ioUtils;

public:
    PacketVisitor(IOUtils &ioUtils) : ioUtils(&ioUtils){};
    void visit(RawEthernet &packet) override;
    void visit(ECPRI &packet) override;
};

#endif // PACKET_VISITOR_H
