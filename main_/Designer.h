#pragma once
#include "Human.h"

class Designer : public Human {
    char* Company;
    double SalaryAmount;
public:
    Designer();
    Designer(const char* n, int a, const char* C, double S);
    ~Designer();

    void Print() override; 
    void Salary() override; 

    void Input(const char* n, int a, const char* C, double S);
};
