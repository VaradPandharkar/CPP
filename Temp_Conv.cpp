#include<iostream>
int main(){
    double temp;
    char unit;

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit do you want to convert to? (F/C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is: " << temp << " F\n";
    }

    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << " C\n";
    }

    else{
        std::cout << "Invalid unit entered!\n";
    }

    return 0;
}