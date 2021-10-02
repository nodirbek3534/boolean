#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool result;

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    result = ((a * a == b * b + c * c) || (b * b == a * a + b * b) || (c * c == a * a + b * b)) && ((a < b + c) && (b < a + c) && (c < b + a)); //uchburchak to'g'ri burchakli bo'lsa true qiymat

    cout << result << endl;
    return 0;
}
