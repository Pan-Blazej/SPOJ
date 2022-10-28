#include "h.h"

// -------------------------------------------------------------------------- //

    int d{};        //  Liczba testow
    int t[20] {};   //  Ilosc liczb do zsumowania w kazdym tescie
    int l[20][20];   //  Poszczegolne liczby do zsumowania

// -------------------------------------------------------------------------- //


// -------------------------------------------------------------------------- //

int main()
{
    COUT "\n ";
    CIN d;

    for (int i=0 ; i<d ; i++)
    {
        ENDL;
        COUT "   ";
        CIN t[i];
        ENDL;

        for (int g=0 ; g<t[i] ; g++)
        {
            COUT "     ";
            CIN l[i][g];
        }
    }

    COUT "\n\n------------------\n\n";

    int suma {};

    for (int i=0 ; i<d ; i++)
    {
        for (int g=0 ; g<t[i] ; g++)
        {
            suma += l[i][g];
        }

        COUT " " << suma << "\n";

        suma = 0;
    }


    PAUSE;
}
