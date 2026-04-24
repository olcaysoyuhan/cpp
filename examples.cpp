#include <iostream>

int main()
{
    int number{};
    std::string result{};
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << "\n";
    result = (number >= 0) ? "Positive" : "Negative";
    std::cout << "The number is: " << result << "\n";
}