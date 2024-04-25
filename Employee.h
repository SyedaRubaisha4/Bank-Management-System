#ifndef Employee_H
#define Employee_H
#include "Customer.h"
class Employee
{
private:
    double salary;
    int size;
    char* employee_Id;
    char* designation;
    Customer* mycustomer;
public:
    Employee(Customer&);
    //~Employee();
    void create_account_by_employee();
    void make_account_no();
    void employee_details();

};
#endif