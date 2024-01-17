#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int years;
    float interest;
    float deposit;
    float total = 0;

    std::cout << "What is the Initial Deposit: \n";
    std::cin >> deposit;

    std::cout << "Number of Years: \n";
    std::cin >> years;

    std::cout << "What is the Interest Rate: \n";
    std::cin >> interest;

    total += deposit * pow(1 + interest / 100, years);
    
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Total Amount in Account: £" << total << "\n";
    std::cout << "The Total Interest made was: £" << total - deposit << "\n";

    return 0;
}