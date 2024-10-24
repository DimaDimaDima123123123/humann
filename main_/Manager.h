#pragma once
#include "Human.h"

class Manager : public Human {
    char* Company;
    double SalaryAmount;
public:
    Manager();
    Manager(const char* n, int a, const char* C, double S);
    ~Manager();

    void Print() override; 
    void Salary() override;

    void Input(const char* n, int a, const char* C, double S);
};
