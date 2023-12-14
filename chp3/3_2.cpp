#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter your number: ";
    vector<double> v;
    double n;
    while (cin >> n)
    {
        v.push_back(n);
    }
    typedef vector<double>::size_type vt_sz;
    vt_sz size = v.size();
    if (size < 4 || size % 4 != 0)
    {
        cout << "You enter number less 4 or it not by 4, try again!";
        return 1;
    }

    sort(v.begin(), v.end());
    int count = size / 4;
    int x = 0;
    while (x < size)
    {
        //只有 int 和 枚举能使用 %，不能看看是否有步骤强制转换了
        if ((int)x % count == 0)
        {
            cout << "group" << endl;
        }
        cout << v[x] << endl;

        ++x;
    }
}