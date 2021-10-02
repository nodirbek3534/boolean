#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, D, x1, x2;
    bool result;

    cout << "a= "; cin >> a; // a != 0
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    D = b * b - 4 * a * c;
    result = D > 0;

    cout << result << endl;
    return 0;
}
