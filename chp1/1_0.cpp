#include <iostream>
#include <string>

int main()
{
    std::cout << "Please input your first name: ";
    // std::cin >> std::string name;
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";
    const std::string spaces(greeting.size(), ' ');
    // second&fourth
    const std::string second = "* " + spaces + " *";
    // first&fifth
    const std::string first(second.size(), '*');

    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " + greeting + " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}