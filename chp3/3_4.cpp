#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    typedef vector<string>::size_type vec_sz;
    string shortest;
    vec_sz shortest_len = 0;
    string longest;
    vec_sz longest_len = 0;

    cout << "Enter string: ";
    // vec_sz str 为什么不可以
    string str;
    while (cin >> str)
    {
        if (longest_len == 0 || str.size() > longest_len)
        {
            longest = str;
            longest_len = str.size();
        }

        if (shortest_len == 0 || str.size() < shortest_len)
        {
            shortest = str;
            shortest_len = str.size();
        }
    }

    cout << "Longest: " << longest << endl;
    cout << "Shortest: " << shortest << endl;

    return 0;
}