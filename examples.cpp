#include <iostream>

int number{};
short int i{};

int main()
{
    while (true)
    {
        i = 1;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (number != 0)
        {
            while (i <= 10)
            {
                std::cout << number << " x " << i << " = " << number * i << "\n";
                i++;
            }
        }
        else
        {
            std::cout << "Exiting the program!" << "\n";
            break;
        }
    }
}