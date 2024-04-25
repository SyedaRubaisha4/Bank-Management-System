#include<iostream>
using namespace std;
#include<stdlib.h>
#include "Customer.h"
#include "Employee.h"
#include "Person.h"
#include "Account.h"
int main()
{
	int cus_or_emp;
	cout << endl << endl;
	cout << "      ---------------------------------------------------------------------\n";
	cout << "      -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
	cout << "      ---------------------------------------------------------------------\n";
	cout << endl;
	cout << "      (1) You are an customer." << endl;
	cout << "      (2) You are an Employee." << endl;
	cout << "      Enter your choice from above menu: ";
	cin >> cus_or_emp;
	cin.ignore();
	system("CLS");
	switch (cus_or_emp)
	{
	case 1:
	{
		int acc_or_not;
		cout << endl << endl;
		cout << "  ---------------------------------------------------------------------\n";
		cout << "      -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
		cout << "  ---------------------------------------------------------------------\n";
		cout << endl;
		cout << " (1) You have an account." << endl;
		cout << " (2) You want to open an account." << endl;
		cout << " Enter your choice from above menu: ";
		cin >> acc_or_not;
		cin.ignore();
		system("CLS");
		switch (acc_or_not)
		{
		case 1:
		{
			Customer temp_cus;
			ifstream fin;
			/*fin.open("bankdata.dat", ios::binary);
			if (!fin)
			{
				cout << "Sorry!!! please reload it..." << endl;
			}
			else*/
			//{
			int check;
			char name[20];
			long int acc_no;
			do
			{
				cout << endl << endl;
				cout << " ---------------------------------------------------------------------\n";
				cout << "      -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
				cout << " ---------------------------------------------------------------------\n";
				cout << endl;
				cout << "                  Please login              " << endl << endl;
				cout << "Enter Your name in capital letters: ";
				cin.getline(name, 20);
				cout << endl;
				cout << "Enter Your account no :";
				cin >> acc_no;
				cin.ignore();
				//fin.read(reinterpret_cast<char*>(&temp_cus), sizeof(temp_cus));
				check = temp_cus.login_check(name, acc_no);
				if (check != 0)
				{
					cout << endl << "Error! Your login data is invalid." << endl;
					cout << "Please Enter valid data." << endl << endl;

				}
			}//
			while (check != 0);
			system("CLS");
			//}
			int choice;
			do
			{
				cout << endl << endl;
				cout << "---------------------------------------------------------------------\n";
				cout << "    -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
				cout << "---------------------------------------------------------------------\n";
				cout << endl;
				cout << " (1) You want to check your account details." << endl;
				cout << " (2) You want to deposite amount. " << endl;
				cout << " (3) You want to withdraw amount. " << endl;
				cout << " (4) You want to make payments. " << endl;
				cout << " (5) You want to apply for loan. " << endl;
				cout << " (6) You want to quit. " << endl;
				cout << " Enter your choice from above menu: ";
				cin >> choice;
				cin.ignore();
				system("CLS");
				switch (choice)
				{
				case 1:
				{
					cout << "  -------------------------------------------------------" << endl;
					cout << "  -            Here is your account details          -" << endl;
					cout << "  -------------------------------------------------------" << endl;
					temp_cus.get_acc_details();
				}
				break;
				case 2:
				{
					cout << endl << endl;
					cout << "  ---------------------------------------------------------------------\n";
					cout << "  -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
					cout << "  ---------------------------------------------------------------------\n";
					cout << endl;
					temp_cus.deposite();
					cout << "  ----------------------------------------------\n";
					cout << "   -       Your amount has been deposited       -\n";
					cout << "  ----------------------------------------------\n";

				}
				break;
				case 3:
				{
					cout << endl << endl;
					cout << "   ---------------------------------------------------------------------\n";
					cout << "      -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
					cout << "   ---------------------------------------------------------------------\n";
					cout << endl;
					temp_cus.withdraw();
					cout << " ----------------------------------------------\n";
					cout << "  -       Your amount has been withdrawl       -\n";
					cout << " ----------------------------------------------\n";

				}
				break;
				case 4:
				{
					cout << endl << endl;
					cout << "  ---------------------------------------------------------------------\n";
					cout << "   -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
					cout << "   ---------------------------------------------------------------------\n";
					cout << endl;
					temp_cus.paybills();

				}
				break;
				case 5:
				{
					cout << endl << endl;
					cout << "      ---------------------------------------------------------------------\n";
					cout << "      -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
					cout << "      ---------------------------------------------------------------------\n";
					cout << endl;
					temp_cus.get_loan();
				}
				}
			} while (choice != 6);
		}
		break;
		}
	}
		//-------------(create account)-----------------
	//	case 2:
	//	{
	//		Customer cus;
	//		Employee emp(cus);
	//		emp.create_account_by_employee();
	//		cus.details();

	//		//ofstream fout;
	//		//fout.open("bankdata.dat", ios::binary);
	//		if (!fout)
	//		{
	//			cout << "Your information is not saved..." << endl;
	//		}
	//		else
	//		{
	//			fout.write(reinterpret_cast<char*>(&cus), sizeof(cus));
	//		}
	//	}
	//	break;
	//	}
	//}
	//break;
	case 2:
	{
		cout << endl << endl;
		cout << "  ---------------------------------------------------------------------\n";
		cout << "  -                      WELCOME TO BANK_Al-RAS ltd.                  -" << endl;
		cout << "  ---------------------------------------------------------------------\n";
		cout << endl;
		Customer c;
		Employee emp2(c);
		emp2.employee_details();
	}
	}
}