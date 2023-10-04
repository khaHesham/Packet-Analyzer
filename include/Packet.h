#include "PacketVisitable.h"

class Packet: public Visitable{

    private:

    string CRC;
    string destinationAddress;
    string sourceAddress;
    string packetType;

    public:

    void setCRC(string CRC);
    void setDestAddress(string destinationAddress);
    void setSourceAddress(string sourceAddress);
    void setPacketType(string packetType);

    string getCRC();
    string getDestAddress();
    string setSourceAddress();
    string getPacketType();


    void accept(PacketVisitor visitor) override;

};

