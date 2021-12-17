//
//  RatingItem.cpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/10/21.
//

#include "RatingItem.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

RatingItem::RatingItem(){
    ratingItemId = 0;
    ratingItemName = "Manager";
    ratingValue = 1;
}

RatingItem::RatingItem(int ri, string rn, int rv){
    ratingItemId = ri;
    ratingItemName = rn;
    ratingValue = rv;
    cout << "This is the RatingItem constructor. These are the parameters:" << ri << rn << rv << endl;
}


void RatingItem::setRatingItemId(){
    cout << "This is the setRatingItemId method";

}
void RatingItem::setRatingItemName(){
    cout << "This is the setRatingItemName method";
}
void RatingItem::setRatingValue(){
    cout << "This is the setRatingValue method";
}


int RatingItem::getRatingItemId(){
    return 1;
}
string RatingItem::getRatingItemName(){
    return "none";
}
int RatingItem::getRatingValue(){
    return 1;
}
