//Muallif: Nurqulov Nodirbek
//Sana: 30.09.2021
//Maqsad: Ikkita butun son berilgan. Shu sonlardan biri toq ikkinchisi juft bo'lsa true qiymat chiqaruvchi programma tuzish

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool b;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;

    //x - toq va y - juft yoki x - juft va y - toq bo;lishi mumkin

    b = ( (x % 2 == 1) && (y % 2 == 0) || (x % 2 == 0) && (y % 2 == 1) );

    cout << b << endl;
    return 0;
}
