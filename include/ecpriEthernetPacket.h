#ifndef ECPRI_ETHERNET_PACKET_H
#define ECPRI_ETHERNET_PACKET_H

#include "packet.h"
#include "packetVisitable.h"
#include "visitor.h"

using namespace std;


class ECPRI : public Packet, public Visitable
{

private:
    string concatenationIndicator;
    string messageType;
    string payloadSize;
    string protocolVersion;
    string rtcID;
    string sequenceID;

public:
    void setConcatIndicator(string concatenationIndicator);
    void setMessageType(string messageType);
    void setPayloadSize(string payloadSize);
    void setProtocolVersion(string protocolVersion);
    void setRtcID(string rtcID);
    void setSequenceID(string sequenceID);
    void accept(Visitor &visitor) override;

    string getConcatIndicator();
    string getMessageType();
    string getPayloadSize();
    string getProtocolVersion();
    string getRtcID();
    string getSequenceID();
};

#endif // ECPRI_ETHERNET_PACKET_H
