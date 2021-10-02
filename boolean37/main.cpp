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

    result = ((x1 == x2 - 1) && (y1 == y2)) ||
             ((x1 == x2 - 1) && (y1 == y2 - 1)) ||
             ((x1 == x2 - 1) && (y1 == y2 + 1)) ||
             ((x1 == x2 ) && (y1 == y2 + 1)) ||
             ((x1 == x2 ) && (y1 == y2 - 1)) ||
             ((x1 == x2 + 1) && (y1 == y2)) ||
             ((x1 == x2 + 1) && (y1 == y2 - 1)) ||
             ((x1 == x2 + 1) && (y1 == y2 + 1));

    cout << result << endl;
    return 0;
}
