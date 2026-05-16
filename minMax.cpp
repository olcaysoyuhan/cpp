#include <iostream>
#include <limits>

int main()
{
    int number{}, minNumber{std::numeric_limits<int>::max()}, maxNumber{std::numeric_limits<int>::min()}, i{1};
    do
    {
        std::cout << "Enter number: ";
        std::cin >> number;
        if (number == 0)
            break;
        if (number < minNumber)
            minNumber = number;
        if (number > maxNumber)
            maxNumber = number;
        i++;
    } while (number != 0);
    std::cout << "Min number: " << minNumber << '\n';
    std::cout << "Max number: " << maxNumber << '\n';
}