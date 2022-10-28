#include "h.h"

// -------------------------------------------------------------------------- //

int wiekszy (int a, int b);
int nww (int a, int b);

// -------------------------------------------------------------------------- //

int main()
{
    int d {};
    int x[20][2] {};

    CIN d; ENDL;

    for (int i=0 ; i<d ; i++)
    {
        CIN x[i][1];
        CIN x[i][2];
        ENDL;
    }

    COUT "\n---------- \n\n";

    for (int i=0 ; i<d ; i++)
    {
        COUT nww(x[i][1], x[i][2]);
        ENDL;
    }

    PAUSE;
}

// -------------------------------------------------------------------------- //

int wiekszy (int a, int b)
{
    if (a>=b) return a;
    else return b;
}

// -------------------------------------------------------------------------- //

int nww (int a, int b)
{
    int     i = wiekszy (a,b);
    bool    eureka = false;

    while(1)
    {
        if ((!(i % a)) and (!(i % b))) eureka = true;

        if (eureka) break;

        i++;
    }

    return i;
}

// -------------------------------------------------------------------------- //
