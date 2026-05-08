#include <iostream>
#include <string>

void message(std::string name)
{
    std::cout << "Hello, " << name << "\n";
}

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    message(name);
}