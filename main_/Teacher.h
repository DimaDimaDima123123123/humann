#pragma once
#include "Human.h"

class Teacher : public Human {
    char* Univer;
    double SalaryAmount;
public:
    Teacher();
    Teacher(const char* n, int a, const char* U, double S);
    ~Teacher();

    void Print() override;
    void Salary() override; 

    void Input(const char* n, int a, const char* U, double S);
};