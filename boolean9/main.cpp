#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool result;

    cout << "ikkita a va b sonlarni kiriting:\n";
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;

    // a va b sonlaridan hech bo'lmaganda bittasi toq son
    result = ((a % 2) != 0) || ((b % 2) != 0);
    cout << result << endl;

    return 0;
}
