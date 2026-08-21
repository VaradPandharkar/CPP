#include<iostream>
int main(){
    // Memory address = A location in memory where data is stored
    // A Memory address can accessed with & (Address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';





    return 0;
}