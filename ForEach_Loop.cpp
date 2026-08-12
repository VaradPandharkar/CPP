#include<iostream>
int main(){
    //ForEach_loop = Loop that eases the Traversal over an iterable data.
    //std::string students[] = {"Varad","Yugank","Bhavesh","Tanay"};
    int grades[] = {95,72,99,76};

    for(int grade : grades){
        std::cout << grade << '\n';
    }
}