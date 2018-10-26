#include <stdio.h>

int main() {
    int i;
    int licznik_petli = 0;

    for (i =100; i>=1; --i) {
        if (i %2 == 0)
            printf("%d ", i);

        licznik_petli++;
    }

    printf("\n");
    printf("liczba pętli wyniosła: %d\n", licznik_petli);
    return 0;
}