#include<iostream>
int main(){
    // Ternary Operator ? = Replacement of if/else Statement 
    // condition ? expression1 : expression2;

    //int grade = 100;
    //grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    int number = 8;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    return 0;
}