#include<iostream>
int main(){
    // Break = out of loop
    // continue = skip current iteration
    for(int i = 1; i<=20; i++){
        if(i == 13){
            //break;
            continue;
        }
        std::cout << i << std::endl;
    }
    return 0;
}