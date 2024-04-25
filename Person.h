#include<iostream>
#include<fstream>
#ifndef POINT_H
#define POINT_H
using namespace std;
class Person
{
protected:
    char name[20];
    char CNIC[20];
    char contact_no[20];
    char adress[20];
    char qualification[20];
public:
    Person();
    ~Person();
    void display_person_data();
    void get_personal_info();
    char* getCNIC();
    char* getname()
    {
        return name;
    }
};

#endif