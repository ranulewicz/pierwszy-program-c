#include <stdio.h>

int main() {
//    int znak = 255;
//
//    while (znak) {
//        printf("wartość całkowita: %d,\tkod ASCII %c\n", znak, znak);
//        --znak;
//    }
//
//    return 0;
//}
int znak = 0;

while (znak < 256) {
printf("wartość całkowita: %d,\tkod ASCII %c\n", znak, znak);
++znak;
}

return 0;
}