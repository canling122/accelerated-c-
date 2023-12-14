#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Please enter your first name and the padding: ";
    string name;
    string::size_type pad;
    cin >> name >> pad;
    const string greeting = "Hello, " + name + "!";
    const int rows = pad * 2 + 3;
    const string::size_type cols = pad * 2 + greeting.size() + 2;

    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        while (c != cols)
        {
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
            {
                cout << "*";
                ++c;
            }
            else if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else if (r == pad || r == rows - 2 || c == pad || c == cols - 2)
            {
                cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}