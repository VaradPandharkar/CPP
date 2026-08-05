#include<iostream>
#include<ctime>
int main(){
    srand(time(0));
    int RandNum = rand() % 5 + 1;
     switch (RandNum){
        case 1:
            std::cout << "You win a bumper sticker!\n";
            break;
        case 2:
            std::cout << "You win a T-shirt!\n";
            break;
        case 3:
            std::cout << "You win a Free Lunch!\n";
            break;
        case 4:
            std::cout << "You win a Gift Card!\n";
            break;
        case 5:
            std::cout << "You win a Car!\n";
            break;
     }

    return 0;
}