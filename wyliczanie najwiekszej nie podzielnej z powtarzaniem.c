#include <stdio.h>

int main() {
    int liczba;
    char znak = 'n';



    printf("Program liczy największą liczbę mniejszą od\n");
    printf("liczby podanej przez użytkownika, która\n");
    printf("jest niepodzielna przez 2, 3, 5, 7.\n");

    do {
        printf("\nPodaj liczbę: ");
        scanf(" %d", &liczba);

        // zrób nieparzystą
        if (!(liczba % 2)) --liczba;

        for (; !(liczba % 3) || !(liczba % 5) || !(liczba % 7); liczba -= 2) {}
        printf("znaleziona liczba: %d\n", liczba);

        printf("\nCzy dalej chcesz liczyc? (t/n) ");
        scanf(" %c", &znak);

    } while (znak =='t' || znak == 'T');
    return 0;
    }
