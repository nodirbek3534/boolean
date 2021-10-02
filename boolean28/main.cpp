#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool result;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;

    result = ((x > 0) && (y > 0) || (x < 0) && (y < 0) );//nuqta I yoki III chorakda

    cout << result << endl;
    return 0;
}
