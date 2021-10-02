#include <iostream>

using namespace std;

int main()
{
    float x, y;
    bool b;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;

    b = ((x < 0) || (y < 0));

    cout << b << endl;

    return 0;
}
