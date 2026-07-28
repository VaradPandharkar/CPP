#include<iostream>
int main(){
    int age;
    std::cout <<"Enter your age: ";
    std::cin >> age;

    if(age >=18){
        std::cout <<"You are eligible to vote";
    }
    else if(age < 0){
        std::cout <<"You haven't been born yet!";
    }
    else{
        std::cout <<"You are not eligible to vote";
    }
    }

// IF STATEMENT :- Do Something if a condition is true.
// if not then don't do it.