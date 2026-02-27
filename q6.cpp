#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20, z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    cout << "Before Swap\n";
    cout << "x = " << *px << " y = " << *py << " z = " << *pz << endl;

    cout << "Addresses:\n";
    cout << "px = " << px << " py = " << py << " pz = " << pz << endl;

    int temp = *px;
    *px = *pz;
    *pz = temp;

    cout << "\nAfter Swap\n";
    cout << "x = " << *px << " y = " << *py << " z = " << *pz << endl;

    cout << "Addresses (unchanged):\n";
    cout << "px = " << px << " py = " << py << " pz = " << pz << endl;

    return 0;
}