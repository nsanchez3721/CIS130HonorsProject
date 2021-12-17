//
//  Rating.cpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#include "Rating.hpp"
#include <iostream>
using namespace std;

Rating::Rating(){
    baristaEval = true;
    cookEval = true;
    serverEval = true;
}

Rating::Rating(bool ratingBarista, bool ratingCook, bool ratingServer){
    baristaEval = ratingBarista;
    cookEval = ratingCook;
    serverEval = ratingServer;
}

void Rating::setBaristaEval(bool ratingBarista){
    baristaEval = ratingBarista;
}

void Rating::setCookEval(bool ratingCook){
    cookEval = ratingCook;
}

void Rating::setServerEval(bool ratingServer){
    serverEval = ratingServer;
}

bool Rating::getBaristaEval(){
    return baristaEval;
}

bool Rating::getCookEval(){
    return cookEval;
}

bool Rating::getServerEval(){
    return serverEval;
}


