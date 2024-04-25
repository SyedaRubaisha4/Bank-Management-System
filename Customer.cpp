
#include "Customer.h"
Customer::Customer(int a) : Person()
{

	//cout << "Customer constructor called.. . ." << endl;
}
void Customer::get_info_to_create_account()
{
	get_personal_info();
	cout << "Choose one of the account type: ";
	cout << "Current or saving(c/s): ";
	char temp;
	cin >> temp;
	while (temp != 's' && temp != 'c')
	{
		cout << "Please enter write option..." << endl;
		cin >> temp;
	}
	acc_of_customer.set_account_type(temp);
}
void Customer:: details()
{
	display_person_data();
	cout << "Account_no: " << acc_of_customer.get_account_no() << endl;
	cout << "Amount: " << acc_of_customer.get_amount()<<endl;
}

int Customer::login_check(char* temp_name, long int temp_acc_no)
{
	int flag = 1, i = 0;
	while (temp_name[i] != '\0')
	{
		if (temp_name[i] != name[i])
		{
			flag = 0;
		}
		i++;
	}
	if (flag == 1)
	{
		if (temp_acc_no == acc_of_customer.get_account_no())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}
long int Customer:: getaccountno()
{
	return acc_of_customer.get_account_no();
}
void Customer::get_acc_details()
{
	acc_of_customer.account_details();
}
void Customer::set_Data(long int temp)
{
	acc_of_customer.set_account_no(temp);
}
void Customer:: paybills()
{
	int choice;
	//cout << "---------------------------------------------\n";
	cout << "      (1) if you want to pay bills." << endl;
	cout << "      (2) if you want to recharge phone." << endl;
	cout << "      (3) if you want to pay challan." << endl;
	cout << "      Enter Your choice from above menu: ";
	cin >> choice;
	cin.ignore();
	switch (choice)
	{
	case 1:
	{
		acc_of_customer.paybils();
	}
	break;
	case 2:
	{
		acc_of_customer.recharge_phone();
	}
	break;
	case 3:
	{
		acc_of_customer.pay_challan();
	}
	}
}
void Customer::get_loan()
{
	acc_of_customer.loan();
}
Customer::~Customer()
{
}
