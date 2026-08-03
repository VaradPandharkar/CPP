#include<iostream>
int main(){
int number;
do{
    std::cout << "Enter a positive #: ";
    std::cin >> number;
}while(number < 0);

std::cout << "The number is: " << number << std::endl;
return 0;
}

// do while Loop :- do some block of code first,
//                  then repeat again if condition is true