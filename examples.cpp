#include <iostream>

int main()
{
    unsigned short int number{};
    bool isPrime{};

    while (true)
    {
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (number == 0)
        {
            break;
        }

        for (unsigned short int i = 2; i <= number; i++)
        {
            isPrime = true;
            for (unsigned short int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                std::cout << i << " ";
            }
        }
        std::cout << '\n';
    }
}
