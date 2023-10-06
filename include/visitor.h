#ifndef VISITOR_H
#define VISITOR_H

class RawEthernet;
class ECPRI;

class Visitor
{
public:
    virtual void visit(RawEthernet &packet) = 0;
    virtual void visit(ECPRI &packet) = 0;
};

#endif // VISITOR_H
