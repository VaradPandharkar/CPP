#include<iostream>
int main()
{
    // size_of = Determines the size of bytes of a:
        //  Variable, data types, Objects, etc

    std::string name = "Varad";
    double gpa = 2.5;
    char grade = 'O';
    bool student = true;

    std::cout << sizeof(student) << " bytes\n";
}