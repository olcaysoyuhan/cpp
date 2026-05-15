#include <iostream>
#include <limits>

int main()
{
    while (true)
    {
        int number{}, factorial{1}, i{1};
        std::cout << "Enter a positive integer: ";
        if (!(std::cin >> number))
        {
            std::cout << "Invalid input." << '\n';
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (number == -1)
        {
            std::cout << "Exiting the program." << '\n';
            return 0;
        }
        if (number < 0)
        {
            std::cout << "Please enter a positive integer." << '\n';
            continue;
        }
        while (i <= number)
        {
            factorial *= i;
            i++;
        }
        std::cout << number << "! = " << factorial << '\n';
    }
    return 0;
}