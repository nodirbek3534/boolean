#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool result;

    cout << "Uchta  a, b va c sonlarni kiriting:\n";
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    // a, b va c sonlaridan faqat bittasi musbat
    result = (a > 0 && b <= 0 && c <= 0) || (b > 0 && a <= 0 && c <= 0) || ( c > 0 && a <= 0 && b <= 0);
    cout << result << endl;
    return 0;
}
