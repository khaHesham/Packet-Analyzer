#include "parserVisitor.h"

#include <iostream>

using namespace std;

// this function should handle the packet input
void ParserVisitor::visit(RawEthernet packet){
    cout << "RawEthernet packet Input" << endl;
}

// this function should handle the packet input
void ParserVisitor::visit(ECPRI packet){
    cout << "ECPRI packet Input" << endl;
}