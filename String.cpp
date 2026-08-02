#include<iostream>
int main(){
    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin, name);

    if(name.length() > 0){
        std::cout << "Your name cant be over 12 Characters";
    }
    else{
        std::cout << "Welcome " << name << std::endl;
    }

return 0;
}