#include<iostream>
using namespace std;
#ifndef Customer_H
#define Customer_H
#include "Person.h"
#include "Account.h"
class Customer : public Person
{
private:
	Account acc_of_customer;
public:
	Customer(int = 0);
	~Customer();
	void get_info_to_create_account();
	void set_Data(long int);
	int login_check(char*, long int);
	long int getaccountno();
	void get_acc_details();
	void withdraw()
	{
		acc_of_customer.withdraw();
	}
	void deposite()
	{
		acc_of_customer.deposite();
	}
	void paybills();
	void get_loan();
	void details();
};

#endif
