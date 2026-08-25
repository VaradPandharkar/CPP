#include<iostream>
void walk(int steps);
int main(){

    walk(100);
    // Recursion = A Programming technique where a function invokes itself from within break a complex concept into a repeatable single step
return 0;
}
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
}