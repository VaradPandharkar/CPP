/*
#include<iostream>
int main(){
    // Dynamic Memory = Memory that is allocated after the program is already compiled & Running.
    int *pNum = NULL;
    pNum = new int;
    *pNum = 19;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << pNum << '\n';   

    delete pNum;
    
    return 0;
}
*/

#include<iostream>
int main(){
    char *pGrades = NULL;
    int size;

    std::cout << "How many Grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}