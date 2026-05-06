#include <iostream>
#include <iomanip>
#include <string>

std::string name{"Olcay"};

int main()
{
    std::cout << name << "\n";
    std::cout << std::setw(10) << name << "\n";
    std::cout << std::right << std::setw(20) << name << "\n";
    std::cout << std::setfill('*') << std::setw(50) << name << "\n";
}