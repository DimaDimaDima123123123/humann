#include "Programmer.h"
#include <iostream>
using namespace std;


Programmer::Programmer()
{
    cout << "Construct Programmer\n";
    name = nullptr;
    age = 20;
    ITcompany = nullptr;
    SalaryAmount = 0;
}

Programmer::Programmer(const char* n, int a, const char* I, double S) : Human(n, a)
{
    cout << "Construct Programmer\n";
    SalaryAmount = S;
    ITcompany = new char[strlen(I) + 1];
    strcpy_s(ITcompany, strlen(I) + 1, I);
}

Programmer::~Programmer() 
{
    delete[] ITcompany;
    cout << "Destruct Programmer\n";
}

void Programmer::Print()
{
    cout << "Output Programmer\n";
    Human::Print();

    cout << "ITcompany: " << ITcompany << endl;
}

void Programmer::Salary() 
{
    cout << "Salary: " << SalaryAmount << endl;
}

void Programmer::Input(const char* n, int a, const char* I, double S)

{
    if (name != nullptr) 
    {
        delete[] name;
    }

    if (ITcompany != nullptr)
    {
        delete[] ITcompany;
    }
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;

    SalaryAmount = S;
    ITcompany = new char[strlen(I) + 1];
    strcpy_s(ITcompany, strlen(I) + 1, I);
}