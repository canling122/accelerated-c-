#include <iostream>

int main()
{
    int x, y;
    std::cout << "Please input two number to compare who is bigger : ";
    std::cin >> x >> y;
    if (x > y)
    {
        std::cout << "the bigger one is " << x;
    }
    else if (x < y)
    {
        std::cout << "the bigger one is" << y;
    }
    else
    {
        // error exception
        std::cout << "maybe the two is equation or you input is not a number" << std::endl;
    }
    return 0;
}