#include <string>

using namespace std;

class Visitable{

    public:

    virtual void accept(Visitor visitor) = 0;

};

