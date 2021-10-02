#include <iostream>

using namespace std;

int main()
{
    int a;
    bool result;

    cout << "Musbat butun son kiriting:\n";
    cout << "a= "; cin >> a;

    // kiritilgan a sonimiz uch xonali toq son
    result = ((a > 99) && (a < 1000) && (a % 2 != 0));
    cout << result << endl;
    return 0;
}
