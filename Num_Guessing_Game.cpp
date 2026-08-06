#include<iostream>
int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do{
        std::cout << "Enter a Guess Between (1-100): ";
        std::cin >> guess; 
        tries++;

        if (guess > num){
            std::cout << "Too High!\n";
        }
        else if(guess < num){
            std::cout << "Too Low!\n";
        }
        else{
            std::cout << "Correct! # of tries: " << tries << '\n';
        }
    }while(guess != num);

    return 0;
}