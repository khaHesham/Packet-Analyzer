#include "ethernetPacket.h"
#include "ecpriEthernetPacket.h"

class Visitor
{
public:
    virtual void visit(RawEthernet &packet) = 0;
    virtual void visit(ECPRI &packet) = 0;
};