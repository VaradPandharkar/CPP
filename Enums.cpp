#include<iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thrusday = 4, friday = 5, saturday = 6};
int main(){

    Day today = sunday;

    switch(today){
        case 0:  sunday : std::cout << "It is Sunday!\n";
        break;
        case 1: monday : std::cout << "It is Sunday!\n";
        break;
        case 2: tuesday: std::cout << "It is Sunday!\n";
        break;
        case 3: wednesday : std::cout << "It is Sunday!\n";
        break;
        case 4: thrusday: std::cout << "It is Sunday!\n";
        break;
        case 5: friday: std::cout << "It is Sunday!\n";
        break;
        case 6: saturday: std::cout << "It is Sunday!\n";
        break;
    }
    return 0;
}