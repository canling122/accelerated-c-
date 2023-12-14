#include <iostream>

int main()
{
    // 1.1
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";

    // 1.2
    const std::string exclam = "!";
    // const std::string message1 = "hello" + ", world" + exclam;
    const std::string message1 = "Hello"
                                 ", world" +
                                 exclam;
    std::cout << "Does this work?" << std::endl;
    return 0;
}