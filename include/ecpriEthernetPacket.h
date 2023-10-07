#ifndef ECPRI_ETHERNET_PACKET_H
#define ECPRI_ETHERNET_PACKET_H

#include <string>

#include "packet.h"
#include "packetVisitable.h"

using namespace std;

class Visitor;

class ECPRI : public Visitable, public Packet
{

private:
    string concatenationIndicator;
    string messageType;
    string payloadSize;
    string protocolVersion;
    string rtcID;
    string sequenceID;

public:
    ECPRI(Parser parser) : Packet(parser) {}
    void setConcatIndicator(string concatenationIndicator);
    void setMessageType(string messageType);
    void setPayloadSize(string payloadSize);
    void setProtocolVersion(string protocolVersion);
    void setRtcID(string rtcID);
    void setSequenceID(string sequenceID);

    void processPacket();

    void accept(Visitor &visitor) override;

    string getConcatIndicator();
    string getMessageType();
    string getPayloadSize();
    string getProtocolVersion();
    string getRtcID();
    string getSequenceID();
};

#endif // ECPRI_ETHERNET_PACKET_H
