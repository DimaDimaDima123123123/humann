#include "Lawyer.h"
#include <iostream>
using namespace std;

Lawyer::Lawyer()
{
    cout << "Construct Lawyer\n";
    name = nullptr;
    age = 25;
    Company = nullptr;
    SalaryAmount = 0;
}

Lawyer::Lawyer(const char* n, int a, const char* C, double S) : Human(n, a) 
{
    cout << "Construct Lawyer\n";
    SalaryAmount = S;

    Company = new char[strlen(C) + 1];
    strcpy_s(Company, strlen(C) + 1, C);
}

Lawyer::~Lawyer() 
{
    delete[] Company;
    cout << "Destruct Lawyer\n";
}

void Lawyer::Print()
{

    cout << "Output Lawyer\n";
    Human::Print();
    cout << "Company: " << Company << endl;
}

void Lawyer::Salary()
{
    cout << "Salary: " << SalaryAmount << endl;
}

void Lawyer::Input(const char* n, int a, const char* C, double S)
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
