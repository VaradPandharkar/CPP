#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;  
    double salary;
    mutable int views;

public:
    Employee(int i, string n, double s)
    {
        id = i;
        name = n;
        salary = s;
        views = 0;
    }

    int getId() const { return id; }
    string getName() const { return name; }
    double getSalary() const { return salary; }

    void setSalary(double s)
    {
        if (s > 0)
            salary = s;
    }

    void display() const
    {
        views++;
        cout << "\nID      : " << id;
        cout << "\nName    : " << name;
        cout << "\nSalary  : " << salary;
        cout << "\nViews   : " << views << endl;
    }
};

int main()
{
    Employee e1(101, "Varad", 50000);

    e1.display();

    e1.setSalary(55000);

    cout << "\nAfter Salary Update:";
    e1.display();

    const Employee e2(102, "Pratham", 60000);

    cout << "\nConst Employee:";
    e2.display();
    e2.display();

    return 0;
}