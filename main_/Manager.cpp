#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager() 
{
    cout << "Construct Manager\n";
    name = nullptr;
    age = 25;
    Company = nullptr;
    SalaryAmount = 0;
}

Manager::Manager(const char* n, int a, const char* C, double S) : Human(n, a) 
{
    cout << "Construct Manager\n";
    SalaryAmount = S;
    Company = new char[strlen(C) + 1];
    strcpy_s(Company, strlen(C) + 1, C);
}


Manager::~Manager() 
{
    delete[] Company;
    cout << "Destruct Manager\n";
}

void Manager::Print()
{
    cout << "Output Manager\n";
    Human::Print();
    cout << "Company: " << Company << endl;
}

void Manager::Salary() 
{
    cout << "Salary: " << SalaryAmount << endl;
}

void Manager::Input(const char* n, int a, const char* C, double S)
{
    if (name != nullptr)
    {
        delete[] name;
    }

    if (Company != nullptr)
    {
        delete[] Company;
    }
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    age = a;
    SalaryAmount = S;

    Company = new char[strlen(C) + 1];
    strcpy_s(Company, strlen(C) + 1, C);
}
