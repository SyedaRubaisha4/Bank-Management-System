#include "makepayments.h"
makepayments::makepayments(makepayments const& payment)
{
	bill_ref_no = payment.bill_ref_no;
	contact_no = payment.challan_no;
	challan_no = payment.challan_no;
}
int makepayments::pay_bill(int amount)
{
	cout << " enter your bill reference no \n";
	cout << " please enter no mminimum 8 digits \n";
	cin >> bill_ref_no;
	cout << "please enter bill amount \n";
	int amo = 0;
	cin >> amo;
	if (amount < amo)
	{
		cout << "your bill can not be accepted because your amount is less than bill amount \n";
	}
	else
	{
		amount -= amo;

		cout << " ___________________________________\n";
		cout << "     your bill is now payed \n";
		cout << "     thanks to us \n";
		cout << "     your amount after payment is :" << amount<<endl;
		cout << "  ______________________________________\n ";
	}
	return amount;
}
int makepayments::recharge_phone(int amount)
{

	long int phone;
	cout << " __________________________________________________\n";
	cout << " enter your phone no: " << endl;

	cin >> phone;
	int amoun;
	cout << "please enter recharge amount:" << endl;

	cin >> amoun;
	if (amount < amoun)
	{
		cout << "your phone  can not be recharged because your amount is 0 \n";
	}
	else
	{
		amount -= amoun;
		cout << " ___________________________________\n";
		cout << "    your phone is now charged \n";
		cout << "    thanks to us \n";
		cout << "    your amount after recharge is : " << amount << endl;
		cout << " ______________________________________\n ";
	}
	return amount;

}
int makepayments::pay_challan(int amount)
{
	cout << "  __________________________________________________\n";
	cout << " enter your challan no and please enter 10 digits \n";
	long int chalan;
	cin >> chalan;
	int count = 10, i = 0;
	cout << "please enter chalan amount \n";
	int amn;
	cin >> amn;
	while (amn <= 0)
	{
		cout << "error : please enter no greater than 1 \n";
		cin >> amn;
	}
	if (amount < amn)
	{
		cout << "your chalan  can not be payed because your amount is 0 \n";
	}
	else
	{
		while (amn > amount)
		{
			cout << "Sorry : your amount is not sufficient to recharge \n";
			cout << "Please insert more amount in your account \n ";
			cin >> amount;
		}
		amount -= amn;

		cout << "___________________________________\n";
		cout << "your phone is now charged \n";
		cout << " thanks to us \n";
		cout << "your amount after recharge is: ";
		cout << amount << endl;
		cout << " ______________________________________\n ";
	}

	return amount;
}
