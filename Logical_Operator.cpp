#include<iostream>
int main(){
    // && = check if conditions are true
    // || = check if one of the conditions is true
    // ! = check if the logical state of its operand

int temp;
bool sunny = true;
std::cout << "Enter the temperature: ";
std::cin >> temp;

if(temp <= 0 || temp >= 30){
    std::cout << "The temperature is bad!\n";
}
else{
    std::cout << "The temperature is good!\n";
}
if (sunny){
    std::cout << " It is sunny outside!";
}
else{
    std::cout << "It is Cloudy ouyside!";
}
return 0;
}