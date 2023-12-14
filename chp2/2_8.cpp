#include <iostream>

int main()
{
    int temp = 1;
    for (int i = 1; i < 10; ++i)
    {
        temp *= i;
    }
    std::cout << "1到10的累乘积为 " << temp << std::endl;
    return 0;
}