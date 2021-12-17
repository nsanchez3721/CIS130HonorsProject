//
//  Customer.cpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 12/3/21.
//

#include "Customer.hpp"
#include <iostream>
using namespace std;

Customer::Customer(){
    customerId = 0;
    student = false;
    veteran = false;
    birthYear = 1900;
    birthMonth  = 1;
    birthDay = 0;
}

Customer::Customer(int customerIdNum, bool studentStatus, bool veteranStatus, int customerBirthYear, int customerBirthMonth, int customerBirthDay) {
    customerId = customerIdNum;
    student = studentStatus;
    veteran = veteranStatus;
    birthYear = customerBirthYear;
    birthMonth = customerBirthMonth;
    birthDay = customerBirthDay;
    }


void Customer::setCustomerId(int customerIdNum){
    customerId = customerIdNum;
}

void Customer::setStudent(bool studentStatus){
    student = studentStatus;
}
void Customer::setVeteran(bool veteranStatus){
    veteran = veteranStatus;
}
void Customer::setBirthYear(int customerBirthYear){
    birthYear = customerBirthYear;
}
void Customer::setBirthMonth(int customerBirthMonth){
    birthMonth = customerBirthMonth;
}
void Customer::setBirthDay(int customerBirthDay){
    birthDay = customerBirthDay;
}

int Customer::getCustomerId(){
    return customerId;
}

bool Customer::getStudent(){
    return student;
}
bool Customer::getVeteran(){
    return veteran;
}
int Customer::getBirthYear(){
    return birthYear;
}
int Customer::getBirthMonth(){
    return birthMonth;
}
int Customer::getBirthDay(){
    return birthDay;
}


double Customer::generosityGuess(){
    return 0.0;
}
 
