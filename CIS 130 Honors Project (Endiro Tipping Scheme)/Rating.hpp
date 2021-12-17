//
//  Rating.hpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#ifndef Rating_hpp
#define Rating_hpp
#include <stdio.h>
using namespace std;

class Rating {
    private:
        bool baristaEval;
        bool cookEval;
        bool serverEval;
        
    public:
        Rating();
    
        Rating(bool, bool, bool);
    
        void setBaristaEval(bool);
        void setCookEval(bool);
        void setServerEval(bool);
    
        bool getBaristaEval();
        bool getCookEval();
        bool getServerEval();
    
    //method to add rating items from order class
    
};

#endif /* Rating_hpp */
