#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool result;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;

    result = (x + y) % 2 != 0;
    cout << result << endl;
    return 0;
}
