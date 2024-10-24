#include "Designer.h"
#include <iostream>

using namespace std;

Designer::Designer()
{
    cout << "Construct Designer\n";
    name = nullptr;
    age = 25;
    Company = nullptr;
    SalaryAmount = 0;
}

Designer::Designer(const char* n, int a, const char* C, double S) : Human(n, a) 
{
    cout << "Construct Designer\n";

    SalaryAmount = S;

    Company = new char[strlen(C) + 1];
    strcpy_s(Company, strlen(C) + 1, C);
}

Designer::~Designer()
{
    delete[] Company;
    cout << "Destruct Designer\n";
}

void Designer::Print() 
{
    cout << "Output Designer\n";
    Human::Print();
    cout << "Company: " << Company << endl;
}

void Designer::Salary() 
{
    cout << "Salary: " << SalaryAmount << endl;
}

void Designer::Input(const char* n, int a, const char* C, double S) 
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
