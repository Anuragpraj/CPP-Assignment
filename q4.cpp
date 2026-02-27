#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main()
{
    int lo, hi;

    int x = 15, y = 7, z = 22;

    cout << "Input numbers: " << x << " " << y << " " << z << endl;

    findMinMax(x, y, z, lo, hi);

    cout << "Minimum = " << lo << endl;
    cout << "Maximum = " << hi << endl;

    return 0;
}

void findMinMax(int a, int b, int c, int &minVal, int &maxVal)
{
    minVal = a;
    maxVal = a;

    if(b < minVal) minVal = b;
    if(b > maxVal) maxVal = b;

    if(c < minVal) minVal = c;
    if(c > maxVal) maxVal = c;
}