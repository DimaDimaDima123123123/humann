#pragma once
#include "Human.h"

class Programmer : public Human {
    char* ITcompany;
    double SalaryAmount;
public:
    Programmer();
    Programmer(const char* n, int a, const char* I, double S);
    ~Programmer();

    void Print() override;
    void Salary() override; 

    void Input(const char* n, int a, const char* I, double S);
};