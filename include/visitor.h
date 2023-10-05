#ifndef VISITOR_H
#define VISITOR_H

#include "ethernetPacket.h"
#include "ecpriEthernetPacket.h"

class Visitor
{
public:
    virtual void visit(RawEthernet &packet) = 0;
    virtual void visit(ECPRI &packet) = 0;
    virtual ~Visitor() = default;
};

#endif // VISITOR_H
