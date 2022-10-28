#include "h.h"

int main()
{
    int d;              //  Liczba przypadkow

    int a[10] {};       //  Podstawa potegi
    int b[10] {};       //  Wykladnik potegi
    int bufor;          //  Bufor do wczytywania podstawy

    CIN d;  //  Pobieram d

    ENDL;

    for (int i=0 ; i<d ; i++)   //  Dla przypadkow od 0 do 'd-1':
    {                           //
        CIN a[i];               //  Pobieram 'a'
        CIN b[i]; ENDL;         //  Pobieram 'b'
    }


    for (int n=0 ; n<d ; n++)   //  Ponownie, dla wszystkich przypadkow:
    {

        bufor = a[n];                 //  Kopiuje wartosc 'a' do buforu

        for (int i=1 ; i<b[n] ; i++)  //  Wykonuje akcje mnozenia o 1 raz mniej niz wynosi wykladnik
        {
            a[n] *= bufor;            //  Mnoze 'a' przez zapisany bufor

            a[n] = a[n] % 10;         //  Redukuje 'a' do ostatniej cyfry
        }
    }

//  Wypisanie wynikow

    POKAZ_T(a, d);

    PAUSE;
}
