#include <iostream>

int main()
{
    int temp = 1;
    for (int i = 1; i < 10; ++i)
    {
        temp *= i;
    }
    std::cout << "1��10���۳˻�Ϊ " << temp << std::endl;
    return 0;
}