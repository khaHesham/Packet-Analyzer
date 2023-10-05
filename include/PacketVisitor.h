#ifndef PACKET_VISITOR_H
#define PACKET_VISITOR_H

#include "visitor.h"
#include "ethernetPacket.h"
#include "ecpriEthernetPacket.h"

class PacketVisitor : public Visitor
{
    private:
        IOUtils ioUtils;
    public:
        PacketVisitor(IOUtils &ioUtils);
        void visit(RawEthernet &packet) override;
        void visit(ECPRI &packet) override;
};

#endif // PACKET_VISITOR_H
