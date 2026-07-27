// cout = << (Insertion operator)
// cin = >> (Extraction operator)

#include<iostream>
int main(){
    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin, name); // use std::getline to read full name with spaces))
    // std::cin >> name;

    std::cout << "What's Your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " year old";

    return 0;

}