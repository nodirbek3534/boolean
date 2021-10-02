//Muallif: Nurqulov Nodirbek
//Sana: 30.09.2021

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool result;

    cout << "Uchburchak tomonlarini kiriting:\n";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    result = ((a + b > c) && (a + c > b) && (b + c > a));

    cout << result << endl;
    return 0;
}
