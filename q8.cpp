#include <iostream>
using namespace std;

int absolute(int n);
int clamp(int val, int lo, int hi);

int main()
{
    cout << "val\tlo\thi\tabsolute(val)\tclamp(val,lo,hi)\n";

    int val, lo, hi;

    // Test case 1
    val = -15; lo = -10; hi = 10;
    cout << val << "\t" << lo << "\t" << hi << "\t"
         << absolute(val) << "\t\t" << clamp(val,lo,hi) << endl;

    // Test case 2
    val = 0; lo = -10; hi = 10;
    cout << val << "\t" << lo << "\t" << hi << "\t"
         << absolute(val) << "\t\t" << clamp(val,lo,hi) << endl;

    // Test case 3
    val = 25; lo = -10; hi = 10;
    cout << val << "\t" << lo << "\t" << hi << "\t"
         << absolute(val) << "\t\t" << clamp(val,lo,hi) << endl;

    // Test case 4
    val = -3; lo = 0; hi = 5;
    cout << val << "\t" << lo << "\t" << hi << "\t"
         << absolute(val) << "\t\t" << clamp(val,lo,hi) << endl;

    return 0;
}

int absolute(int n)
{
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi)
{
    return (val < lo) ? lo : (val > hi) ? hi : val;
}