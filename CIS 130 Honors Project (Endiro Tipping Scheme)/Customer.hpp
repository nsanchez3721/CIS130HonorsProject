//
//  Customer.hpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>

class Customer {
    
    private:
        int customerId;
        bool student;
        bool veteran;
        int birthYear;
        int birthMonth;
        int birthDay;
    
    public:
        Customer();
        
        Customer(int, bool, bool, int, int, int);
        
        void setCustomerId(int);
        void setStudent(bool);
        void setVeteran(bool);
        void setBirthYear(int);
        void setBirthMonth(int);
        void setBirthDay(int);
    
        int getCustomerId();
        bool getStudent();
        bool getVeteran();
        int getBirthYear();
        int getBirthMonth();
        int getBirthDay();
    
        double generosityGuess();

};

#endif /* Customer_hpp */
