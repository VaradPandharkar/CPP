#include<iostream>
int main(){
    std::string name;
    while(name.empty()){
        std::cout << "Enter your name:";
        std::getline(std::cin, name);   // In C++, we use the std::getline() function to read an entire line of text, including spaces, from an input stream
    }
std::cout << "Hello" << name;



return 0;
}
