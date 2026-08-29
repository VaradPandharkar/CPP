#include<iostream>
 struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car car);
   int main(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Red";

    car2.model = "Audi";
    car2.year = 2025;
    car2.color = "Black";

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);


    return 0;
}

void printCar(Car car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';


}