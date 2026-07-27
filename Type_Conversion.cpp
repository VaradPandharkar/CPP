#include<iostream>
int main(){
    // Type conversion = conversion a value of one data type to another 
    // Implicit = Automatic
    // Explicit = precede value with new data type 

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100; // Implicit conversion
    std::cout << score << "%";
    return 0;
}