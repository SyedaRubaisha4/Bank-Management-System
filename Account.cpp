#include "Account.h"
Account::Account()
{
	amount = 0;
	account_type = 'c';
	account_no = 0;
	interest_rate = 0.0;
}

Account::~Account()
{

}
void Account::set_account_no(long int temp)
{
    account_no = temp;
}
long int Account:: get_account_no()
{
	return account_no;
}
void Account:: set_amount(int temp)
{
	amount = temp;
}
void Account:: set_account_type(char temp)
{
    account_type = temp;
    if (account_type == 's')
    {
        interest_rate = 25.00;
    }
    else
    {
        interest_rate = 5.00;
    }
}
void Account::account_details()
{
    cout << " Account No: " << account_no << endl;
    cout << " Available ammount: " << amount << endl;
    cout << " No of transections this month: " << t.get_no_of_tranaction() << endl;
}
void Account::deposite()
{
    amount = t.deposit_amount(amount);
}

void Account::withdraw()
{
    amount = t.withdraw_amount(amount);
}


void Account:: loan()
{
    cout << "      To get loan please enter your details." << endl;
    int choice;
    int salary;
    cout << "      Enter your salary: ";
    cin >> salary;
    while (salary < 20000)
    {
        cout << "       Error please enter wright information about salary: ";
        cin >> salary;
    }
    if (salary >= 30000 && salary < 40000)
    {
        loan_amount = 500000;
    }
    else if (salary >= 40000 && salary < 50000)
    {
        loan_amount = 1000000;
    }
    else if (salary >= 50000 && salary < 60000)
    {
        loan_amount = 1500000;
    }
    else
    {
        loan_amount = 2000000;
    }
    cout << "      You can get loan up to " << loan_amount << "." << endl;
    cout << "      Enter 1 if you want to approve this loan.";
    cout << "      Enter 1/0 to continue: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << endl << "       Congratulation! Your loan has been approved." << endl;
        cout << "      You must pay " << loan_amount / 100 << " per month." << endl;
    }
}