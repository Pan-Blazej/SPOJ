#include <iostream>
using namespace std;

// -------------------------------------------------------------------------- //

bool czy_pierwsza (long liczba)
{
    bool rezultat = 1;

    for (int i=2 ; i < (liczba/2) ; i++ )
    {
        if (liczba % i) continue;
        else
        {
            rezultat = 0;
            i = liczba;
        }
    }

    return rezultat;
}
// -------------------------------------------------------------------------- //

int main()
{
    long liczba = 1;

    while(liczba)
    {
        cout << " Liczba: ";
        cin  >> liczba;

        if (!liczba) break;

        if (czy_pierwsza(liczba)) cout << " pierwsza";
        else                    cout << " nie pierwsza";

        cout << endl << endl;

    }

    return 0;
}

// -------------------------------------------------------------------------- //
