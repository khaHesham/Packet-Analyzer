#include"visitor.h"

class ParserVisitor : public Visitor
{
public:
    void visit(RawEthernet packet);
    void visit(ECPRI packet);
};