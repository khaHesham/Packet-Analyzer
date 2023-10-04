#include "packet.h"

class RawEthernet: public Packet{

    private:

    string data;

    public:

    void setData(string data);
    void accept(Visitor visitor);
    
    string getData();
    

};

