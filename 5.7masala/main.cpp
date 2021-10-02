//Muallif: Nurqulov Nodirbek
//Sana: 30.09.2021
//Maqsad: a, b, c haqiqiy sonlari berilgan. Shu sonlarning pifagor sonlari ekanligi tekshirilsin. a, b, c sonlari pifagor sonlari bo'lsa true, aks holda false qiymat chiqarish.

#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    bool result;

    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "c= "; cin >> c;

    // To'g'ri burchakli uchburchakli uchburchakning gipotenuzasi kiritilgan sonlardan ixtiyoriy biri bo'lishi mumkin
    result = ((c * c = a * a + b * b) || (b * b = a * a + c * c) || (a * a = b * b + c * c));

    cout << result << endl;
    return 0;
}
