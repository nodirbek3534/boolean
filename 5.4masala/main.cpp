#include <iostream>

using namespace std;

int main()
{
    int n;
    bool b;

    cout << "Natural son kiriting:\n";
    cout << "n= "; cin >> n;

    // n soni 2 ga qoldiqsiz bo'linsa u juft son bo'ladi.
    b = (n % 2 == 0);
    cout << b << endl;
    return 0;
}
