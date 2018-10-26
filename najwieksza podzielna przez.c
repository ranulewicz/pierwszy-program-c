#include <stdio.h>

int main() {
    int i;


    for (i = 2000; i >= 0; --i) {
        if (i%2 && i%3 && i%5 && i%7 ) {
            printf("%d ", i);
            break;
        }

    }


    return 0;
}