#include "Employee.hpp"
#include "Customer.hpp"
#include "Order.hpp"
#include "Rating.hpp"
#include "Tip.hpp"

#include <iostream>
using namespace std;


int main() {
    
                    //employee name, id, basewage, type (1 = barista, 2 = cook, 3 = server)
    Employee employeeObject1("Kylie", 16, 11.00, 1);
    Employee employeeObject2("Yasmin", 18, 11.00, 2);
    Employee employeeObject3("Christopher", 19, 11.00, 3);
    
    Employee employeeObject4("Hannah", 15, 11.00, 1);
    Employee employeeObject5("Wendy", 18, 11.00, 2);
    Employee employeeObject6("Kevonate", 15, 11.00, 3);


                   //customer id, student status, veteran status, birth year, birth month, birth day
    Customer customerObject1(1, false, false, 2006, 1, 19);
    Customer customerObject2(2, true, false, 1991, 12, 3);
    Customer customerObject3(3, false, true, 2002, 3, 21);
    Customer customerObject4(4, false, false, 2005, 5, 13);
    Customer customerObject5(5, true, true, 1998, 7, 29);
    
                    //barista eval, cook eval, server eval: good = true, bad = false
    Rating ratingObject1(true, true, false);
    Rating ratingObject2(true, false, true);
    Rating ratingObject3(false, true, true);
    Rating ratingObject4(false, false, true);
    Rating ratingObject5(false, false, false);
    
                    //0 = cash tip, 1 = electronic tip; total amount of tip from customer
    Tip tipObject1(0, 5.0);
    Tip tipObject2(1, 8.0);
    Tip tipObject3 (0, 4.0);
    Tip tipObject4 (1, 6.0);
    Tip tipObject5 (0, 4.50);
    
                    //order id, customer, employee associated, rating associated, tip associated, order total, discount, on date, size of party
    Order orderObject1(1, customerObject1, employeeObject1, employeeObject2, employeeObject3, ratingObject1, tipObject1, 12.96, 0.10, false, 2);
    Order orderObject2(2, customerObject2, employeeObject4, employeeObject5, employeeObject6, ratingObject2, tipObject2, 21.55, 0.10, true, 3);
    Order orderObject3(3, customerObject3, employeeObject1, employeeObject2, employeeObject3, ratingObject3, tipObject3, 47.63, 0.10, false, 5);
    Order orderObject4(4, customerObject4, employeeObject4, employeeObject5, employeeObject6, ratingObject4, tipObject4, 26.42, 0.10, false, 4);
    Order orderObject5(5, customerObject5, employeeObject1, employeeObject2, employeeObject3, ratingObject5, tipObject5, 9.50, 0.10, true, 1);
    
    cout << endl << "---------------------" << endl << endl;
    
    
    orderObject1.tipDistributor();
    
    orderObject2.tipDistributor();
    
    orderObject3.tipDistributor();
    
    orderObject4.tipDistributor();
    
    orderObject5.tipDistributor();
    
    return 0;
}
