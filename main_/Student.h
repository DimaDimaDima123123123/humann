#pragma once
#include "Human.h"

class Student : public Human {
    char* Univer;
    double Scholarship;
public:
    Student();
    Student(const char* n, int a, const char* U, double S);
    ~Student();

    void Print() override; 
    void Salary() override; 

    void Input(const char* n, int a, const char* U, double S);
};