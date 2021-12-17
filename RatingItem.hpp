//
//  RatingItem.hpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/10/21.
//

#ifndef RatingItem_hpp
#define RatingItem_hpp
#include <string>
using namespace std;
#include <stdio.h>

class RatingItem {
    private:
        int ratingItemId;
        string ratingItemName;
        int ratingValue;
        
    public:
        RatingItem();
    
        RatingItem(int, string, int);
    
        void setRatingItemId();
        void setRatingItemName();
        void setRatingValue();
    
        int getRatingItemId();
        string getRatingItemName();
        int getRatingValue();
     
    
};

#endif /* RatingItem_hpp */
