#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool result;

    cout << "Uchta a, b va c sonlarni kiriting:\n";
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    result = ( b > a && c > a);
    cout << result << endl;
    return 0;
}
