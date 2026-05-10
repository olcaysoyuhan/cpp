#include <iostream>

int sum(int x, int y)
{
    return x + y;
}

int get(int (*callback)(int, int))
{
    int result = callback(5, 4);
    return result;
}

int main()
{
    int finalResult = get(sum);
    std::cout << "Sonuç: " << finalResult << '\n';
}
