#include <iostream>

void message()
{
    std::cout << "Hello World!" << "\n";
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        message();
    }
}