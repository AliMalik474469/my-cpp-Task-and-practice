#include <iostream>

int main() {
    double balance = 1000.0;
    double amount;

    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds." << std::endl;
    } else if (amount <= 0) {
        std::cout << "Invalid amount." << std::endl;
    } else {
        balance -= amount;
        std::cout << "Withdrawal approved. New balance: $" << balance << std::endl;
    }

    return 0;
}
