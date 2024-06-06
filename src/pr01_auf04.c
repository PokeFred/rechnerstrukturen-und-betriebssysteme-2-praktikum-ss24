#include <stdio.h>
#include <stdlib.h>

int quersumme(int zahl) {
    int result = 0;

    while (zahl != 0) {
        result += zahl % 10;
        zahl /= 10;
    }

    return result;
}

int main() {
    int x = 0;
    printf("Geben Sie ein Zahl ein: ");
    scanf("%i", &x);
    printf("Quersumme von %d: %d\n", x, quersumme(x));

    return EXIT_SUCCESS;
}
