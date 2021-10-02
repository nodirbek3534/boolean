#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool result;

    cout << "Ikkita a va b son kiriting:\n";
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;

    result = (a > 2 && b <= 3);

    cout << result << endl;
    return 0;
}
