#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool result;

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    result = ((a < b + c) && (b < a + c) && (c < b + a)); //uchburchak yasash mumkin bo'lsa true qiymat
    cout << result << endl;
    return 0;
}
