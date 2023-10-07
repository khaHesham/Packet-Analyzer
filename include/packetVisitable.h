#ifndef PACKET_VISITABLE_H
#define PACKET_VISITABLE_H

#include "visitor.h"

class Visitor;


using namespace std;

class Visitable
{

public:
    virtual void accept(Visitor &visitor) = 0;
};

#endif // PACKET_VISITABLE_H
