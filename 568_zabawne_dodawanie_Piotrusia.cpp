#include "h.h"

// -------------------------------------------------------------------------- //

int     odwroc      (int liczba);
int     wymnoz      (int liczba);

// -------------------------------------------------------------------------- //

int main()
{
    int ile;
    int tabela[20] {};
    int ile_przemnozen {};

    int koniec{};

    COUT "\n ";

    CIN ile;

    for (int i=0 ; i<ile ; i++)
    {
        COUT "\n  ";
        CIN tabela[i];
    }


    for (int i=0 ; i<ile ; i++)
    {
        ile_przemnozen = 0;

        while(1)
        {
            if ( (tabela[i]) == odwroc(tabela[i]) ) break;

            tabela[i] = wymnoz(tabela[i]);

            ile_przemnozen++;
        }

        ENDL;
        COUT ile_przemnozen << " " << tabela[i];

        ile_przemnozen = 0;
    }



    PAUSE;
}


// -------------------------------------------------------------------------- //

int     odwroc      (int liczba)
{
    int     rezultat {};
    int     cel[10] {};

    //

    int i=0;

    while(1)
    {
        cel[i] = (liczba % 10);

        liczba -= cel[i];
        liczba /= 10;
        if (liczba < 1) break;
        i++;
    }

    int x=1;

    //

    while(1)
    {
        rezultat += (cel[i] * x);

        x *= 10;

        i--;

        if (i<0) break;
    }

    return rezultat;
}

// -------------------------------------------------------------------------- //

int     wymnoz      (int liczba)
{
    int rezultat = 1;

    while(1)
    {
       rezultat *= (liczba % 10);
       liczba -= (liczba % 10);
       liczba /= 10;

       if (liczba<1) break;
    }

    return rezultat;
}

// -------------------------------------------------------------------------- //
