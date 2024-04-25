#include "Person.h"
Person::Person()
{
	for (int i = 0; i < 20; i++)
	{
		name[i] = '\0';
		CNIC[i] = '\0';
		contact_no[i] = '\0';
		adress[i] = '\0';
		qualification[i] = '\0';
	}
}
char* Person::getCNIC()
{
	return CNIC;
}
void Person::display_person_data()
{
	cout << "----------------------------------\n";
	cout << "-       Your Personal Data       -\n";
	cout << "----------------------------------\n" << endl;
	cout << "(1) Name: " << name << endl;
	cout << "(2) CNIC: " << CNIC << endl;
	cout << "(3) Contact no: " << contact_no << endl;
	cout << "(4) Adress: " << adress << endl;
	cout << "(5) Your qualification: " << qualification << endl;

}
void Person::get_personal_info()
{
	const int size = 20;
	cout << "_________________________________________________________________________" << endl;
	cout << endl << "Please give us following information.  " << endl << endl;
	cout << "Your name in capital letters: ";
	cin.getline(name, size);
	int i = 0, flag = 1;
	do
	{
		flag = 1;
		i = 0;
		while (name[i] != '\0')
		{
			if (name[i] >= 65 && name[i] <= 91)
			{
				i++;
			}
			else if (name[i] == ' ')
			{
				i++;
			}
			else
			{
				flag = 0;
				break;
			}

		}
		if (flag == 0)
		{
			cout << endl << "Error! Please follow instructions. . ." << endl << endl;
			cout << "Your name in capital letters : ";
			cin.getline(name, size);
		}
	} while (flag == 0);
	cout << "Your CNIC with no dashes and spaces: ";   
	cin.getline(CNIC, size);
	do
	{
		flag = 1;
		i = 0;
		while (CNIC[i] != '\0')
		{
			if (CNIC[i] < 48 || CNIC[i] > 57)
			{
				flag = 0;
				break;
			}
			i++;
		}
		if (flag == 0 || i != 13)
		{
			flag = 0;
			cout << endl << "Error! Please follow instructions. . ." << endl << endl;
			cout << "Enter your CNIC with no dashes and spaces: ";
			cin.getline(CNIC, size);
		}
	} while (flag == 0);
	cout << "Enter your current contact_no: ";
	cin.getline(contact_no, size);
	do
	{
		flag = 1;
		i = 1;

		while (contact_no[i] != '\0')
		{
			if (contact_no[i] < 48 || contact_no[i] > 57)
			{
				flag = 0;
				break;
			}
			i++;
		}
		if (flag == 0 || contact_no[0] != '+' || i != 13)
		{
			flag = 0;
			cout << endl << "Error! Please follow instructions. . ." << endl << endl;
			cout << "Enter your contact no with format(+923011111111): ";
			cin.getline(contact_no, size);
		}
	} while (flag == 0);
	cout << "Enter your current adress: " << endl;
	cin.getline(adress, size);
	cout << "Enter your Qualification: " << endl;
	cin.getline(qualification, size);

}
Person::~Person()
{
	if (this)
	{
		delete name;
		delete CNIC;
		delete adress;
		delete qualification;
		delete contact_no;
	}
}