#include "Employee.h"
Employee::Employee(Customer& cus)
{
	size = 20;
	designation = new char[size];
	employee_Id = new char[size];
	salary = 50000;
	mycustomer = &cus;

}
void Employee::create_account_by_employee()
{
	cout << "I am employee to create your account." << endl;
	//cout << "Enter Your details: " << endl;
	mycustomer->get_info_to_create_account();
	make_account_no();
}






void Employee::make_account_no()
{
	srand(time(0));
	int temp = 0;
	long int temp_account_no = 0;
	for (int i = 0; i < 10; i++)
	{
		temp = (rand() % 9) + 1;
		temp_account_no *= 10;
		temp_account_no += temp;
	}
	if (temp_account_no < 0)
	{
		temp_account_no *= -1;
	}
	mycustomer->set_Data(temp_account_no);
}


void Employee::employee_details()
{
	cout << "      ---------------------------------------" << endl;
	cout << "      -       Here is Employees data.       -" << endl;
	cout << "      ---------------------------------------" << endl;
	cout << "      Employee ID: 3453bxr " << endl;
	cout << "      destination: Accountant" << endl;
	cout << "      Salary: " << salary << endl;
}