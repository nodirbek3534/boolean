#include <iostream>

using namespace std;

int main()
{
    int a;
    bool result;

    cout << "Uch xonali son kiriting:\n";
    cout << "a= "; cin >> a;

    int a1 = a / 100;
    int a2 = (a / 10) % 10;
    int a3 = a % 10;

    result = ((a2 == a1 + 1) && (a3 == a2 + 1) || (a2 == a1 - 1) && (a3 == a2 - 1) );
    cout << result << endl;
    return 0;
}
