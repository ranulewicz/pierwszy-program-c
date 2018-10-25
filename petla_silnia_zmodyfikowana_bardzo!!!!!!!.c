#include <stdio.h>
#include <stdbool.h>

#define TEST

double licz_silnie(double podstawa) {
//    if (podstawa == 0) {
//        return 1;
//    }
//    else
 {
        double licznik;
        double silnia =1;

        for (licznik = 5; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;
    }
}

bool test_licz_silnie() {
    if (licz_silnie(0) == 1)
        if (licz_silnie(1) == 1)
            if (licz_silnie(2) == 2)
                if (licz_silnie(5) == 120){
                    printf("test_licz_silnie() przechodzi");
                    return true;
                }

    printf("test_licz_silnie nie działa!");
    return false;
        }


double main() {

#ifndef TEST


    double wynik;
    double podstawa;


        printf("Podaj podstawe silni w prszedziale od 0 do 15: \n");
        scanf("%lf", &podstawa);

        if (podstawa >= 0 && podstawa <= 15) {

            wynik = licz_silnie(podstawa);
            printf("silnia ; %lf\n", wynik);
        } else {
            printf("byle co n, n <=15");


        }

        return 0;
#else
    test_licz_silnie();
#endif

}