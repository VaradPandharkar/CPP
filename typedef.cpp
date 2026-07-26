#include<iostream>
#include<vector>

//typedef std::vector>std::pair<std::string,int> pairlist_t;

typedef std::string text_t;
typedef int number_t;

int main(){

text_t firstname = "Varad";
number_t age = 19;


std::cout << "My name is " << firstname << std::endl;
std::cout << "My age is " << age << '\n';

    return 0;
}

// Typedef = IS A RESERVED KEYWORD USED TO CREATE AN ADDITIONAL NAME (ALIAS) FOR ANOTHER DATA TYPE