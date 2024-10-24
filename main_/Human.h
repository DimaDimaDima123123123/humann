#pragma once
class Human 
{
protected:
    char* name;
    int age;
public:
    Human();
    Human(const char*, int);

    virtual void Print(); 
    virtual void Salary(); 

    void Input();
    virtual ~Human();
};