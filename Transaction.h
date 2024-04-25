
#include "Account.h"
#include "makepayments.h"
#ifndef Transaction_H
#define Transaction_H
class Transaction : public makepayments
{
private:

	double deposit;
	double withdrawl_amount;
	int no_of_transactions;
public:

	Transaction();
	Transaction(Transaction const& transaction);
	int deposit_amount(int);
	int withdraw_amount(int);
	void increment_deposits();
	void increment_withdraws();
	int get_no_of_tranaction();
	~Transaction();

};


#endif
