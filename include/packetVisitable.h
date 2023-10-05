#include <string>
#include "packetVisitor.h"

using namespace std;

class Visitable
{

public:
    virtual void accept(Visitor &visitor) = 0;
};
