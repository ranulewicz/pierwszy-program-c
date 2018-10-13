#include <stdio.h>
#include <math.h>



void wyswietl_info() {
    printf("Program rozwiazuje układ dwóch równań liniowych.\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("\n");
    printf("Podaj wspolczynniki.\n");
}

void podaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {
    printf("Podaj a1: \n");
    scanf("%lf", a1);
    printf("Podaj a2: \n");
    scanf("%lf", a2);
    printf("Podaj b1: \n");
    scanf("%lf", b1);
    printf("Podaj b2: \n");
    scanf("%lf", b2);
    printf("Podaj c1: \n");
    scanf("%lf", c1);
    printf("Podaj c2: \n");
    scanf("%lf", c2);
}
void Twoj_uklad_rownan(double a1, double b1, double c1, double a2, double b2, double c2) {
    printf("Twoj uklad rownan.\n");
    printf("%lf*x +%lf*y = %5.2lf\n", a1, b1, c1);
    printf("%lf*x +%lf*y = %5.2lf\n", a2, b2, c2);
    printf("\n");
}
double wyznacznik(double k, double l, double m, double n){
    return k * n - l * m;
}

void licz_wyznaczniki(double a1, double b1, double c1, double a2, double b2, double c2, double (*w), double (*wy), double (*wx)) {

    (*w) = wyznacznik(a1, a2, b1, b2);
    (*wx) = wyznacznik(c1, c2, b1, b2);
    (*wy) = wyznacznik(a1, a2, c1, c2);
}

void wyznaczniki() {
    printf("wyznacznik w = %lf\n, w");
    printf("wyznacznik wx = %lf\n, wx");
    printf("wyznacznik wy = %lf\n, wy");
}

void rozwiazanie(double wx, double wy, double w) {
    double x, y;
    if(w != 0.0) {
        x = wx / w;
        y = wy / w;
        printf("rozwiazanie:\n");
        printf("x=%5.2lf, y=%5.2lf", x,y);
        printf("\n");
    } else {
        if (wx != 0.0 || wy != 0.0) {
            printf("uklad rownan sprzeczny - nie ma rozwiazania.");
        } else {
            printf("uklad rownan nieoznaczony - nieskonczenie wiele rozwiazan.");
        }
    }
}

int main() {
    double a1, b1, c1, a2, b2, c2, wx, wy, w;
    wyswietl_info();
    podaj_wspolczynniki(&a1, &b1, &c1, &a2, &b2, &c2);
    Twoj_uklad_rownan(a1, b1, c1, a2, b2, c2);
    licz_wyznaczniki(a1, b1, c1, a2, b2, c2, &w, &wx, &wy);
    wyznaczniki();
    rozwiazanie(wx, wy, w);


    return 0;




}











