#include "Transaction.h"
Transaction::Transaction()
{
	deposit = 0.0;
	withdrawl_amount = 0.0;
	no_of_transactions = 0;
}
Transaction::Transaction(Transaction const& transaction)
{
	deposit = transaction.deposit;
	withdrawl_amount = transaction.withdrawl_amount;
	no_of_transactions = transaction.no_of_transactions;
}
int Transaction::deposit_amount(int amount)
{
	cout << "Enter amount you want to deposite: ";

	cin >> deposit;
	while (deposit <= 0)
	{
		cout << "ERROR :please, enter valid amount \n";
		cin >> deposit;
	}
	cout << "Your amount before deposition is: " << amount << endl;
	amount += deposit;
	cout << "  ---------------------------------------------------\n";
	cout << "  DEAR CUSTOMER YOUR AMOUNT AFTER DEPOSITION IS: " << amount << endl;
	increment_deposits();
	return amount;
}
int Transaction::withdraw_amount(int amount)
{

	cout << " Enter the amount you want to withdraw: ";

	cin >> withdrawl_amount;
	while (withdrawl_amount < 0)
	{
		cout << "ERROR : you have entered wrong information kindly enter right amount \n";
		cin >> withdrawl_amount;
	}
	// check amount from file so that it is not zero
	if (amount < withdrawl_amount)
	{
		cout << "SORRY : BUT YOUR CURRENT AMOUNT IS LESS THAN WITHDRAWL. INSERT IT \n";
	}
	else
	{
		cout << "YOUR AMOUNT BEFORE WITHDRAWL IS :" << amount << endl;
		amount -= withdrawl_amount;
	}


	cout << "  ---------------------------------------------------------\n";
	cout << "  DEAR CUSTOMER YOUR AMOUNT AFTER WITHDRAWL IS :" << amount << endl;
	increment_withdraws();

	return amount;
}
void Transaction::increment_deposits()
{
	no_of_transactions++;

}
void Transaction::increment_withdraws()
{
	no_of_transactions++;
}
int Transaction::get_no_of_tranaction()
{
	return no_of_transactions;
}
Transaction::~Transaction()
{

}