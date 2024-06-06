#include <stdio.h>
#include <stdlib.h>

void quadrat(float*);

int main() {
    float seitenlaenge = 3.7;
    quadrat(&seitenlaenge);
    printf("Die Fläche des Quadrates beträgt %.2fm^2", seitenlaenge);

    return EXIT_SUCCESS;
}

void quadrat(float *zahl) {
    *zahl = *zahl * *zahl;
}
