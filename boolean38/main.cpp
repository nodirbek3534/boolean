#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    bool result;

    cout << "x1= "; cin >> x1;
    cout << "y1= "; cin >> y1;

    cout << "x2= "; cin >> x2;
    cout << "y2= "; cin >> y2;

    int k1 = x1 + y1;
    int k2 = x2 + y2;

    result = (k1 == k2) ||
             ((k2 == k1 + 2) || (k2 == k1 - 2)) ||
             ((k2 == k1 + 4) || (k2 == k1 - 4)) ||
             ((k2 == k1 + 6) || (k2 == k1 - 6)) ||
             ((k2 == k1 + 8) || (k2 == k1 - 8)) ||
             ((k2 == k1 + 10) || (k2 == k1 - 10)) ||
             ((k2 == k1 + 12) || (k2 == k1 - 12)) ||
             ((k2 == k1 + 14) || (k2 == k1 - 14));

    cout << result << endl;
    return 0;
}
