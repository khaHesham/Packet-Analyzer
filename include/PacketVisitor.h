#include "visitor.h"
#include"EthernetPacket.h"
#include"ecpriEthernetPacket.h"

class PacketVisitor : public Visitor
{
public:
    void visit(RawEthernet packet);
    void visit(ECPRI packet);
};