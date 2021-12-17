//
//  Tip.hpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#ifndef Tip_hpp
#define Tip_hpp

#include <stdio.h>

class Tip {

    private:
        int tipType;
        double tipAmount;


    public:
        Tip();
    
        Tip(int, double);
    
        void setTipType(int);
        void setTipAmount(double);

    
        int getTipType();
        double getTipAmount();

    
        double electronicTip(double);
        double cashTip(double);
};

#endif /* Tip_hpp */
