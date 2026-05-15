// This program prompts the user to enter a number and then prints all prime numbers up to that number.

#include <iostream>
#include <limits>

// this function checks if a number is prime
bool isPrime(int number)
{
    if (number <= 1)
        return false;

    for (int i = 2; i <= number / i; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

// this function gets valid input from the user
int getValidInput()
{
    int number{};

    while (true)
    {
        std::cout << "Enter a number (0 to quit): ";
        if (!(std::cin >> number))
        {
            std::cout << "Invalid input. Please enter an integer. \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (number == 0)
        {
            return 0;
        }
        if (number < 0)
        {
            std::cout << "Please enter a non-negative integer.\n";
            continue;
        }
        if (number <= 1)
        {
            std::cout << "Please enter a number greater than 1.\n";
            continue;
        }
        return number;
    }
}

int main()
{
    while (true)
    {
        int number = getValidInput();

        if (number == 0)
        {
            std::cout << "Program terminated.\n";
            break;
        }

        for (int i = 2; i <= number; i++)
        {
            if (isPrime(i))
            {
                std::cout << i << " ";
            }
        }
        std::cout << '\n';
    }
}
