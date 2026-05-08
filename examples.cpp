#include <iostream>
#include <iomanip>
#include <string>

std::string name{"Olcay"};
char ch{'a'};
char ch2 = 61;

int main()
{
    std::cout << name << "\n";
    std::cout << std::setw(10) << name << "\n";
    std::cout << std::right << std::setw(20) << name << "\n";
    std::cout << std::setfill('*') << std::setw(50) << name << "\n";
    std::cout << ch << "\n";
    std::cout << ch2 << "\n";
}