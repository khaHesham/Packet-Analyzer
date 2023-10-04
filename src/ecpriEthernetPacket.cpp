#include "./include/ecpriEthernetPacket.h"

void ECPRI::setConcatIndicator(string concatenationIndicator){
    this->concatenationIndicator = concatenationIndicator;
}

void ECPRI::setMessageType(string messageType){
    this->messageType = messageType;
}

void ECPRI::setPayloadSize(string payloadSize){
    this->payloadSize = payloadSize;
}

void ECPRI::setProtocolVersion(string protocolVersion){
    this->protocolVersion = protocolVersion;
}

void ECPRI::setRtcID(string rtcID){
    this->rtcID = rtcID;
}

void ECPRI::setSequenceID(string sequenceID){
    this->sequenceID = sequenceID;
}

string ECPRI::getConcatIndicator(){
    return this->concatenationIndicator;    
}

string ECPRI::getMessageType(){
    return this->messageType;
}

string ECPRI::getPayloadSize(){
    return this->payloadSize;
}

string ECPRI::getProtocolVersion(){
    return this->protocolVersion;
}
string ECPRI::getRtcID(){
    return this->rtcID;
}

string ECPRI::getSequenceID(){
    return this->sequenceID;
}