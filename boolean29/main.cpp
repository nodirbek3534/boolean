#include <iostream>

using namespace std;

int main()
{
    float x, y, x1, x2, y1, y2;
    bool result;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;

    cout << "x1= "; cin >> x1;
    cout << "y1= "; cin >> y1;

    cout << "x2= "; cin >> x2;
    cout << "y2= "; cin >> y2;

    result = ((x > x1) && (x2 > x)) && ((y < y1) && (y > y2));
    cout << result << endl;
    return 0;
}
