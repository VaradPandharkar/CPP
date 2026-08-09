#include<iostream>
#include<iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice;

    do{
        std::cout << "Enter your Choice:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;

    }

    }while(choice != 4);

    return 0;
}

void showbalance(double balance){
    std::cout << "Your Balance is: $ "<< std::setprecision(2) << std::fixed << balance << std::endl;
}


double deposit(){
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else
    {
        std::cout << "Invalid amount: \n";
        return 0;
    }
}







double withdraw(double balance){
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    return amount;
}