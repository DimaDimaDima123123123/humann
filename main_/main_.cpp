#include <iostream>
#include "Human.h"
#include "Programmer.h"
#include "Student.h"
#include "Teacher.h"
#include "Designer.h"
#include "Manager.h"
#include "Lawyer.h"
using namespace std;

int main()
{
    Human* human = nullptr;
    int choice;

    cout << "Chose a person:\n";
    cout << "#1 — student\n";
    cout << "#2 — programmer\n";
    cout << "#3 — teacher\n";
    cout << "#4 — manager\n";
    cout << "#5 — lawyer\n";
    cout << "#6 — designer\n";
    cin >> choice;

    switch (choice) 
    {
    case 1:
        human = new Student("Ben", 25, "Itstep", 15000);
        break;
    case 2:
        human = new Programmer("Bohdan", 35, "Google", 60000);
        break;
    case 3:
        human = new Teacher("Kris", 23, "Itstep", 40000); 
        break;
    case 4:
        human = new Manager("John", 50, "Xbox", 120000); 
        break;
    case 5:
        human = new Lawyer("Max", 45, "Sony", 30000);
        break;
    case 6:
        human = new Designer("Michael", 27, "Microsoft", 15000);
        break;
    default:
        cout << "Error\n";
        return 0;
    }

    human->Print(); 

    cout << "Chose a persons salary\n";
    cout << "#1 — student\n";
    cout << "#2 — programmer\n";
    cout << "#3 — teacher\n";
    cout << "#4 — manager\n";
    cout << "#5 — lawyer\n";
    cout << "#6 — designer\n";
    cin >> choice;

    switch (choice) 
    {
    case 1:
        human = new Student("Ben", 25, "Itstep", 15000);
        break;
    case 2:
        human = new Programmer("Bohdan", 35, "Google", 60000);
        break;
    case 3:
        human = new Teacher("Kris", 23, "Itstep", 40000);
        break;
    case 4:
        human = new Manager("John", 50, "Xbox", 120000);
        break;
    case 5:
        human = new Lawyer("Max", 45, "Sony", 30000);
        break;
    case 6:
        human = new Designer("Michael", 27, "Microsoft", 15000);
        break;
    default:
        cout << "Error. Wrong choice.\n";   
        return 0;
    }

    human->Salary();

    Human* humans[6] = 
    {
        new Student("Ben", 25, "Itstep", 15000),
        new Programmer("Bohdan", 35, "Google", 60000),
        new Teacher("Kris", 23, "Itstep", 40000),
        new Manager("John", 50, "Xbox", 120000),
        new Lawyer("Max", 45, "Sony", 30000),
        new Designer("Michael", 27, "Microsoft", 15000)
    };
    for (int i = 0; i < 6; i++) 
    {
        humans[i]->Print();
    }
    return 0;
}