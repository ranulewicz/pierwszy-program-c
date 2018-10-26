#include <stdio.h>


int main(){
int liczba;
int licznik_petli = 0;
    printf("program liczy najwieksza liczbe mniejsza od\n");
    printf("liczby podanej przez uzytkownika ktora\n");
    printf("jest niepodzielna przez 2, 3, 5, 7.\n\n");
    printf("podaj liczbe: ");
    scanf( "  %d", &liczba);

    // zrób nieparzystą
    if (!(liczba % 2)) --liczba;


    for(; !(liczba%3) || !(liczba%5) || !(liczba%7); liczba -=2) {
        licznik_petli++;
}
    printf("znaleziona liczba: %d\n", liczba);

    printf("\n");
    printf("liczba petli wyniosla: %d\n", licznik_petli);
    return 0;
}