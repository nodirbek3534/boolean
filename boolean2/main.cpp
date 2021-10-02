#include <iostream>

using namespace std;

int main()
{
    int a;
    bool toq;

    cout << "Son kiriting:\n";
    cout << "a= "; cin >> a;

    toq = (a % 2 == 1);
    cout << toq << endl;
    return 0;
}
