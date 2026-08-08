#include<iostream>
int myNum = 3;
void printNum();
int main(){
// Local Variable = declared inside the function or a block{}
// Global Variable = declared outside the function or a block{}
    int myNum = 1;

    printNum();
    std::cout << myNum << '\n'; 

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << '\n'; 
}