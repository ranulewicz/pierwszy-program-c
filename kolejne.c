#include <stdio.h>

int main(){
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;
    char ciag_znakow[256];

    printf("podaj znak: ");
    scanf("%c", &znak);
    printf("podaj ciag znakowy: ");
    scanf("%s", ciag_znakow);
    printf("podaj liczbe calkowita: ");
    scanf("%i", &wartosc_calkowita);
    printf("podaj liczbe wymierna: ");
    scanf("%lf", &wartosc_wymierna);

    printf("\n");
    printf("znak = %c,\nciag znakowy = %s,\n"
           "liczba calkowita =%i,\nliczba wymierna =%lf",

           znak,
           ciag_znakow,
           wartosc_calkowita,
           wartosc_wymierna
    );

    return 0;
}