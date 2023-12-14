#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    cout << "Enter your first name: ";
    string name;
    cin >> name;
    cout << "Enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter your all homework scores: ";
    vector<double> work;
    double x;
    while (cin >> x)
    {
        work.push_back(x);
    }
    typedef vector<double>::size_type vt_sz;
    vt_sz size = work.size();
    if (size == 0)
    {
        cout << "you must enter your grades. Try again! ";
        cout << endl;
        return 1;
    }

    double median;
    double mid = size / 2;
    median = (size % 2 == 0) ? (work[mid] + work[mid - 1]) / 2 : work[mid];

    streamsize prec = cout.precision();
    cout << "Your scores: " << setprecision(3)
         << midterm * 0.2 + (final + median) * 0.4
         << setprecision(prec)
         << endl;
    return 0;
}