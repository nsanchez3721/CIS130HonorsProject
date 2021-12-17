//
//  Tip.cpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#include "Tip.hpp"
#include <iostream>
using namespace std;

Tip::Tip(){
    tipType = 1;
    tipAmount  = 1.0;
}

Tip::Tip(int tipType2, double tipAmountNum){
    tipType = tipType2;
    tipAmount = tipAmountNum;
}

void Tip::setTipType(int tipType2){
    tipType = tipType2;
}

void Tip::setTipAmount(double tipAmountNum){
    tipAmount = tipAmountNum;
}

int Tip::getTipType(){
    return tipType;
}

double Tip::getTipAmount(){
    return tipAmount;
}

double Tip::electronicTip(double dEt){
    dEt = 0.0;
    return dEt;
}
double Tip::cashTip(double dCt){
    dCt = 0.0;
    return dCt;
}
