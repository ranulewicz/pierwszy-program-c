#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;

    double c = 0.00000001;
    double d = 0.0000000000001;
    double eps = 0.001;

    printf("%i\n", a == b);  /* sprawdza czy są równe */

    printf("%i\n", ((c - d) * (c - d)) < eps); /* to też sprawdza czy są równe */

    return 0;
}