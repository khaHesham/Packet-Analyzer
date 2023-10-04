#include "visitor.h"

class PacketVisitor : public Visitor
{
public:
    void visit(RawEthernet packet);
    void visit(ECPRI packet);
};