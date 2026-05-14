#include <iostream>

bool isPrime(int j)
{
    if (j <= 1)
        return false;

    for (int i = 2; i <= j / i; i++)
    {
        if (j % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int number{};

    while (true)
    {
        std::cout << "Enter a number (0 to quit): ";

        if (!(std::cin >> number))
        {
            std::cout << "Invalid input. Please enter an integer. \n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (number == 0)
        {
            std::cout << "Program terminated.\n";
            break;
        }
        if (number < 0)
        {
            std::cout << "Please enter a non-negative integer.\n";
            continue;
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
