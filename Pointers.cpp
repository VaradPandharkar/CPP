#include<iostream>
int main(){
    std::string name = "Varad";
    int age = 19;

    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &name;
    int *page = &age;

    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *page << '\n';
    std::cout << *pFreePizzas << '\n';

    return 0;
}

// Pointers = Variable that stores a memory address of a another variables sometimes it's easier to work with an address
