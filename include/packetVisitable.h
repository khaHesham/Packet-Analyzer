#ifndef PACKET_VISITABLE_H
#define PACKET_VISITABLE_H

#include "visitor.h"

using namespace std;

class Visitable
{

public:
    virtual void accept(Visitor &visitor) = 0;
    virtual ~Visitable() = default;
};

#endif // PACKET_VISITABLE_H
