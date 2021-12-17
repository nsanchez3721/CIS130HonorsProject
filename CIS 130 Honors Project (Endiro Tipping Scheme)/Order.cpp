//
//  Order.cpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#include "Order.hpp"
#include <iostream>
using namespace std;

Order::Order(){
    orderId = 0;
    orderAmount = 0.0;
    vetStuDiscount = 0.1;
    onDate = false;
    sizeOfParty = 1;
}

Order::Order(int orderIdNum, Customer orderCustomer, Employee orderBarista, Employee orderCook, Employee orderServer, Rating orderRating, Tip orderTip, double orderAmountNum, double orderVetStu, bool orderOnDate, int orderPartySize){
    orderId = orderIdNum;
    customer = orderCustomer;
    
    barista = orderBarista;
    cook = orderCook;
    server = orderServer;
    
    rating = orderRating;
    tip = orderTip;
    orderAmount = orderAmountNum;
    vetStuDiscount = orderVetStu;
    onDate = orderOnDate;
    sizeOfParty = orderPartySize;
    }


void Order::setOrderId(int orderIdNum){
    orderId = orderIdNum;
}

void Order::setCustomer(Customer orderCustomer){
    customer = orderCustomer;
}


void Order::setRating(Rating orderRating){
    rating = orderRating;
}

void Order::setTip(Tip orderTip){
    tip = orderTip;
}

void Order::setOrderAmount(double orderAmountNum){
    orderAmount = orderAmountNum;
}
void Order::setVetStuDiscount(double orderVetStu){
    vetStuDiscount = orderVetStu;
}
void Order::setOnDate(bool orderOnDate){
    onDate = orderOnDate;
}
void Order::setSizeOfParty(int orderPartySize){
    sizeOfParty = orderPartySize;
}


int Order::getOrderId(){
    return orderId;
}

Customer Order::getCustomer(){
    return customer;
}



Rating Order::getRating(){
    return rating;
}

Tip Order::getTip(){
    return tip;
}

double Order::getOrderAmount(){
    return orderAmount;
}
double Order::getVetStuDiscount(){
    return vetStuDiscount;
}
bool Order::getOnDate(){
    return onDate;
}
int Order::getSizeOfParty(){
    return sizeOfParty;
}

void Order::tipDistributor(){
    double tip4TipDist = tip.getTipAmount();
    
    bool barisTip = rating.getBaristaEval();
    bool cookTip = rating.getCookEval();
    bool servTip = rating.getServerEval();
    
    double barisTipAmount = 0;
    
    double cookTipAmount = 0;
    
    double servTipAmount = 0;
    
    if (barisTip == false && cookTip == false && servTip == false) {
        // barista/cook/server
        barisTipAmount = tip4TipDist/3;
        
        cookTipAmount = tip4TipDist/3;
        
        servTipAmount = tip4TipDist/3;
     }
    
    else if (barisTip == false && cookTip == false && servTip == true){
        // server
        servTipAmount = tip4TipDist;
     }
    
    else if (barisTip == false && cookTip == true && servTip == false){
        // cook
        cookTipAmount = tip4TipDist;
     }
    
    else if (barisTip == true && cookTip == false && servTip == false){
        // barista
        barisTipAmount = tip4TipDist;
     }
     
    else if (barisTip == true && cookTip == true && servTip == false){
        // barista/cook
        barisTipAmount = tip4TipDist/2;
        
        cookTipAmount = tip4TipDist/2;
     }
     
     else if (barisTip == true && cookTip == false && servTip == true) {
        // barista/server
         barisTipAmount = tip4TipDist/2;
         
         servTipAmount = tip4TipDist/2;
     }
     
     else if (barisTip == false && cookTip == true && servTip == true) {
        // cook/server
         cookTipAmount = tip4TipDist/2;
         
         servTipAmount = tip4TipDist/2;
         
     }
     
    else if (barisTip == true && cookTip == true && cookTip == true){
        // barista/cook/server
        barisTipAmount = tip4TipDist/3;
        
        cookTipAmount = tip4TipDist/3;
        
        servTipAmount = tip4TipDist/3;
        
     }
    
    
    //employee name, employee type, employee amount
    
    cout << "Total Tip Amount from Customer: "<< tip4TipDist << endl << endl;
    
    cout << "Barista: " << barista.getName() << " " << barisTipAmount << endl << endl;
    
    cout << "Cook: " << cook.getName() << " " << cookTipAmount << endl << endl;
    
    cout << "Server: " << server.getName() << " " << servTipAmount << endl;
    
    cout << "_____________________________________" << endl;
    
}
