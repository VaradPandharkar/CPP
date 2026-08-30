#include<iostream>

class Student{
    public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){

    Student student1("Varad", 19, 3.2);
    Student student2("Yugank", 20, 4.2);
    Student student3("Bhavesh", 18, 2.2);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    return 0;
}