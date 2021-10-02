//Muallif: Nurqulov Nodirbek
//Sana: 30.09.2021
//Maqsad: Ikkita butun son berilgan. Shu sinlar toq bo'lsa true qiymat chiqaruvchi programma tuzish.

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool b;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;

    //x va y ni ikkoviniyam 2 ga bo'lganimizda qoldiq 1 bo'lishi kerak
    b = ((x % 2 == 1) && (y % 2 == 1));

    cout << b << endl;
    return 0;
}
