#pragma once
#include "Human.h"

class Lawyer : public Human {
    char* Company;
    double SalaryAmount;
public:
    Lawyer();
    Lawyer(const char* n, int a, const char* C, double S);
    ~Lawyer();

    void Print() override; 
    void Salary() override; 

    void Input(const char* n, int a, const char* C, double S);
};
