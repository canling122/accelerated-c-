#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char key = 'y';

    while (key != 'n')
    {
        int rows, cols;
        cout << "Please input the rows and cols: ";
        cin >> rows >> cols;

        for (int r = 0; r != rows; ++r)
        {
            for (int c = 0; c != cols; ++c)
            {
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << "are you want to try again(y/n)?: ";
        cin >> key;
    }
    return 0;
}