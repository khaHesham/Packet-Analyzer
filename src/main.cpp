#include <iostream>
#include <string>
#include <vector>

#include "../include/ecpriEthernetPacket.h"
#include "../include/ethernetPacket.h"
#include "../include/parser.h"
#include "../include/utils.h"
#include "../include/packetVisitor.h"


using namespace std;


int main(){

    string inputFilePath = "io/in_packets";
    string outputFilePath = "io/out_packets";

    IOUtils ioUtils(inputFilePath, outputFilePath);

    vector<string> packetVector = ioUtils.readPackets();

    Parser parser;
    PacketVisitor packetVisitor(ioUtils);


    for(string packet: packetVector){
        parser.setPacket(packet);
        string packetType = parser.getPacketType();
        
        if(packetType == "AEFE"){
            ECPRI ecepriPacket;
            ecepriPacket.setConcatIndicator(parser.getConcatIndicator());
            ecepriPacket.setCRC(parser.getCRC());
            ecepriPacket.setDestAddress(parser.getDestAdress());
            ecepriPacket.setMessageType(parser.getMessageType());
            ecepriPacket.setPacketType(packetType);
            ecepriPacket.setPayloadSize(parser.getPayloadSize());
            ecepriPacket.setRtcID(parser.getRtcID());
            ecepriPacket.setProtocolVersion(parser.getProtocolVersion());
            ecepriPacket.setSequenceID(parser.getSequenceID());
            ecepriPacket.setSourceAddress(parser.getSourceAddress());
            ecepriPacket.accept(packetVisitor);
        }
        else{
            RawEthernet rawEthernetPacket;
            rawEthernetPacket.setDestAddress(parser.getDestAdress());
            rawEthernetPacket.setCRC(parser.getCRC());
            rawEthernetPacket.setSourceAddress(parser.getSourceAddress());
            rawEthernetPacket.setPacketType(packetType);
            rawEthernetPacket.setData(parser.getData());
            rawEthernetPacket.accept(packetVisitor);
        }
        
    }

}



