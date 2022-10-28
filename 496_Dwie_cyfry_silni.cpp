#include "h.h"

long long silnia (int liczba);

// -------------------------------------------------------------------------- //

int main()
{
    int d, dj, j;
    long long x[30] {};

    cin >> d;
    ENDL;

    for (int i=0 ; i<d ; i++)
    {
        cin >> x[i];

        x[i] = silnia(x[i]);

        ENDL;
    }


     for (int i=0 ; i<d ; i++)
    {
        if (x[i]>9) cout << ((x[i] % 100) - (x[i] % 10))/10 << " ";
                    cout << (x[i] % 10);
        ENDL;
    }


    PAUSE;
}

// -------------------------------------------------------------------------- //

long long silnia (int liczba)
{
    long long wynik=1;

    for (int i=liczba ; i>0 ; i--)
    {
        wynik *= i;
    }

    return wynik;
}

// -------------------------------------------------------------------------- //
