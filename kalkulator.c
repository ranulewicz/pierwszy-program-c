#include <stdio.h>

void mnoz(double a, double b) {
    printf("Wynik mnozenia: %lf\n", a * b);

}

void dodaj(double a, double b) {
    printf("Wynik dodawania: %lf\n", a + b);

}

void odejmij(double a, double b) {
    printf("Wynik odejmowania: %lf\n", a - b);

}

void dziel(double a, double b) {

    if (b == 0.0) {
        puts("nie dzielimy przez zero!");

    } else {
        printf("Wynik dzielenia:  %lf\n", a / b);

    }
}

double licz(double a, double b, double wybor) {
    if (wybor == '*') {
        mnoz(a, b);
    } else if (wybor == '+') {
        dodaj(a, b);
    } else if (wybor == '-') {
        odejmij(a, b);
    } else if (wybor == '/') {
        dziel(a, b);
    } else {
        puts("Nie znam dzialania!");
        return 0;
    }
    return 1;
}

int main(void) {
    double a, b;
    char wybor;
    int czy_dalej = 1;

    while (czy_dalej == 1) {
        printf("Podaj wartosc argumentu a: ");
        scanf("%lf", &a);
        printf("Podaj dzialanie: ");
        scanf(" %c", &wybor);
        printf("Podaj wartosc argumentu b: ");
        scanf("%lf", &b);

        licz(a, b, wybor);

        printf("Czy dalej chcesz liczyc? (1 - tak / 0 - nie) ");
        scanf("%d", &czy_dalej);
    }
    return 0;
}
