#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool result;

    cout << "Musbat butun son kiriting:\n";
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    result = (a == b) || (b == c) || (c == a) || (a == b == c);
    cout << result << endl;
    return 0;
}
