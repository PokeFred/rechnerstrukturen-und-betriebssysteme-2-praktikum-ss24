#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main() {
    for (int i = 1; i <= MAX; i++) {
        printf("|");
        for (int j = 1; j <= MAX; j++) {
            int result = i * j;

            if (result < 10) {
                printf("   %i |", i * j);
            } else if (result < 100) {
                printf("  %i |", i * j);
            } else {
                printf(" %i |", i * j);
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
