//
//  Employee.hpp
//  CIS 130 Honors Project (Endiro Tipping Scheme)
//
//  Created by Natalie Sanchez on 11/29/21.
//

#ifndef Employee_hpp
#define Employee_hpp
#include <string>
using namespace std;

class Employee {
  
    private:
        string name;
        int id;
        double baseWage;
        int employeeType;
    
    
    public:
        Employee();
    
        Employee(string, int, double, int);
    
        void setName(string);
        void setId(int);
        void setWage(double);
        void setEmployeeType(int);
    
        string getName();
        int getId();
        double getWage();
        int getEmployeeType();
    
};

#endif /* Employee_hpp */
