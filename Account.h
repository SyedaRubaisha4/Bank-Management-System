#include<iostream>
using namespace std;
#ifndef Account_H
#define Account_H
#include "Transaction.h"
class Account
{
private:
    char account_type;
    long int account_no;
    double interest_rate;
    int loan_amount;
protected:
    int amount;
    Transaction t;
public:
    Account();
    ~Account();
    void set_account_no(long int temp);
    void set_account_type(char temp);
    void set_amount(int);
    void loan();
    long int get_account_no();
    void account_details();
    void withdraw();
    void deposite();
    void paybils()
    {
        amount = t.pay_bill(amount);
    }
    void recharge_phone()
    {
        amount = t.recharge_phone(amount);
    }
    void pay_challan()
    {
        amount = t.pay_challan(amount);
    }
    int get_amount()
    {
        return amount;
    }
};
#endif
//class Account
//{
//protected:
//	long int AccountNo;
//	char  AccountType;
//	double amount;
//	double interest;
//public:
//	Account()
//	{
//		AccountNo = 0;
//		AccountType = '0';
//		amount = 56789;
//		interest = 4;
//	}
//	void SetAccountNo()
//	{
//		long int d;
//		cout << "Enter the account NO:" << endl;
//		cin >> d;
//		AccountNo = d;
//	}
//	long int getAccountNo()
//	{
//		return AccountNo;
//	}
//	void SetAccountType()
//	{
//		cout << "Enter the account type:" << endl;
//		cout << " Enter 'C' for current account or Enter 'S' for savings \n";
//		cin >> AccountType;
//		/*while (AccountType != 'C' && AccountType != 'S')
//		{
//			cout << " ERROR : please enter correct information \n";
//			cin >> AccountType;
//		}*/
//
//		if (AccountType == 'C')
//		{
//			current_account();
//		}
//		else
//		{
//			savings_account();
//		}
//	}
//	char getAccountType()
//	{
//		return AccountType;
//	}
//	void SetAmount()
//	{
//		cout << " Please enter amount for your account \n";
//
//		cin >> amount;
//		if (amount <= 0 && amount <= 2000)
//		{
//			cout << " PLaese enter correct information \n";
//			cin >> amount;
//		}
//	}
//	void savings_account()
//	{
//		cout << " So You have savings account so 4% interest would pay by our bank \n ";
//		SetAmount();
//		amount += (interest / 100);
//		cout << " your amount after getting interest is \n";
//		cout << amount << endl;
//	}
//	void current_account()
//	{
//		cout << " So you have current account \n";
//		SetAmount();
//		cout << " your amount is .." << amount << endl;
//	}
//	double getAmount()
//	{
//		return amount;
//	}
//	void Acount_information()
//	{
//		cout << "_____________________________________________________\n";
//		cout << " Your account no is  :" << AccountNo << endl;
//		cout << " Your account type is :" << AccountType << endl;
//		cout << " Your amount in your account is :" << amount << endl;
//		cout << "_______________________________________________________\n";
//	}
//	~Account()
//	{
//
//	}
//};