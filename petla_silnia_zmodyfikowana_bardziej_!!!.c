#include <stdio.h>
#include <stdbool.h>

#define TEST

double licz_silnie(int podstawa) {


        double licznik;
        double silnia =1;

        for (licznik = 3; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;

}

void test_licz_silnie_0(double licznik){
    if(licz_silnie(0) !=1)
        printf("test nr %lf nie działa\n", licznik);


}
void test_licz_silnie_1(double licznik){
    if(licz_silnie(1) !=1)
        printf("test nr %lf nie działa\n", licznik);


}
void test_licz_silnie_2(double licznik){
    if(licz_silnie(2) !=2)
        printf("test nr %lf nie działa\n", licznik);


}

void run_test_pool(){
    double licznik = 0;

    test_licz_silnie_0(++licznik);
    test_licz_silnie_1(++licznik);
    test_licz_silnie_2(++licznik);
}

double main() {

#ifndef TEST


    double wynik;
    double podstawa;


        printf("Podaj podstawe silni w prszedziale od 0 do 15: \n");
        scanf("%lf", &podstawa);

        if (podstawa >= 0 && podstawa <= 15) {

            wynik = licz_silnie(podstawa);
            printf("silnia(%lf) = %lf", podstawa, wynik);
        } else {
            printf("byle co n, n <=15");


        }


#else
    run_test_pool();
#endif
    return 0;
}