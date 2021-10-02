#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool result;

    cout << "ikkita a va b sonlarni kiriting:\n";
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;

    // a va b sonlari toq sonlar
    result = (a % 2 == 1 && b % 2 == 1);
    cout << result << endl;
    return 0;
}
