#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher()
{
    cout << "Construct Teacher\n";
    name = nullptr;
    age = 20;
    Univer = nullptr;
    SalaryAmount = 0;
}

Teacher::Teacher(const char* n, int a, const char* U, double S) : Human(n, a)
{
    cout << "Construct Teacher\n";
    SalaryAmount = S;
    Univer = new char[strlen(U) + 1];
    strcpy_s(Univer, strlen(U) + 1, U);
}

Teacher::~Teacher()
{
    delete[] Univer;
    cout << "Destruct Teacher\n";
}

void Teacher::Print() 
{
    cout << "Output Teacher\n";
    Human::Print();
    cout << "University: " << Univer << endl;
}

void Teacher::Salary() 
{
    cout << "Salary: " << SalaryAmount << endl;
}

void Teacher::Input(const char* n, int a, const char* U, double S) 
{

    if (name != nullptr) 
    {
        delete[] name;
    }

    if (Univer != nullptr) 
    {
        delete[] Univer;
    }

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    age = a;

    SalaryAmount = S;

    Univer = new char[strlen(U) + 1];
    strcpy_s(Univer, strlen(U) + 1, U);

}