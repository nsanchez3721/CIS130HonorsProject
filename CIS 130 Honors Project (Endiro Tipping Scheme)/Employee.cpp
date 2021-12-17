//
//  Employee.cpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 11/29/21.
//

#include "Employee.hpp"
#include <iostream>
using namespace std;

Employee::Employee(){
    name = "";
    id = 0;
    baseWage = 11.00;
    employeeType = 0;
}

Employee::Employee(string employeeName, int employeeId, double employeeBaseWage, int employeeTypeOneTwoThree) {
    name = employeeName;
    id = employeeId;
    baseWage = employeeBaseWage;
    employeeType = employeeTypeOneTwoThree;
}

void Employee::setName(string employeeName){
    name = employeeName;
}

void Employee::setId(int employeeId){
    id = employeeId;
}

void Employee::setWage(double employeeBaseWage){
    baseWage = employeeBaseWage;
}

void Employee::setEmployeeType(int employeeTypeOneTwoThree){
    employeeType = employeeTypeOneTwoThree;
}

string Employee::getName() {
    return name;
}

int Employee::getId() {
    return id;
}

double Employee::getWage() {
    return baseWage;
}

int Employee::getEmployeeType() {
    return employeeType;
}
