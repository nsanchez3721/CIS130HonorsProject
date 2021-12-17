//
//  Order.hpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#ifndef Order_hpp
#define Order_hpp
#include "Customer.hpp"
#include "Employee.hpp"
#include "Rating.hpp"
#include "Tip.hpp"
#include <stdio.h>

class Order {

    private:
        int orderId;
        Customer customer;
        Employee cook;
        Employee barista;
        Employee server;
        Rating rating;
        Tip tip;
        double orderAmount;
        double vetStuDiscount = 0.10;
        bool onDate;
        int sizeOfParty;


    public:
        Order();
    
        Order(int, Customer, Employee, Employee, Employee, Rating, Tip, double, double, bool, int);
        
        void setOrderId(int);
        void setCustomer(Customer);
        void setEmployee(Employee);
        void setRating(Rating);
        void setTip(Tip);
        void setOrderAmount(double);
        void setVetStuDiscount(double);
        void setOnDate(bool);
        void setSizeOfParty(int);
    
    
        int getOrderId();
        Customer getCustomer();
        Employee getEmployee();
        Rating getRating();
        Tip getTip();
        double getOrderAmount();
        double getVetStuDiscount();
        bool getOnDate();
        int getSizeOfParty();
        
        void tipDistributor();
};


#endif /* Order_hpp */
