#include <stdio.h>

double licz_silnie(double podstawa) {
    if (podstawa == 0) {
        return 1;
    } else {
        double licznik;
        double silnia =1;

        for (licznik = 1; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;
    }
}

double main() {
    double wynik;
    double podstawa;
    double czy_dalej = 1;
    while (czy_dalej == 1) {

        printf("Podaj podstawe silni w prszedziale od 0 do 15: \n");
        scanf("%lf", &podstawa);

        if (podstawa >= 0 && podstawa <= 15) {

            wynik = licz_silnie(podstawa);
            printf("silnia ; %lf\n", wynik);
        } else {
            printf("byle co n, n <=15");

            printf("Czy dalej chcesz liczyc? (1 - tak / 0 - nie) ");
            scanf("%lf", &czy_dalej);
        }
    }
        return 0;
}