#include <iostream>

using namespace std;

int main()
{
    int a;
    bool result;

    cout << "Musbat butun son kiriting:\n";
    cout << "a= "; cin >> a;

    // kiritilgan a sonimiz ikki xonali juft son
    result = ((a > 9) && (a < 100) && (a % 2 == 0));
    cout << result << endl;
    return 0;
}
