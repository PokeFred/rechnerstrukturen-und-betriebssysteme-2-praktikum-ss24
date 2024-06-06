#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ascii2int(char *s) {
    int cutPoint = 0;

    for (int i = 0; i < strlen(s); ++i) {
        char element = s[i];
        if (!((element >= 48) && (element <= 57))) {
            if (cutPoint == 0) {
                cutPoint = i;
            }
        }
    }

    int length;
    if (cutPoint == 0) {
        length = strlen(s);
    } else {
        length = cutPoint;
    }

    int result = 0;
    int counter = 1;
    for (int i = 0; i < length; ++i) {
        result *= counter;
        result += s[i] - '0';

        if (counter == 1) {
            counter += 9;
        }
    }

    return result;
}

int main() {
    char *zahl[] = {
        "53463",
        "44227 Dortmund",
        "01234"
    };

    for (int i = 0; i < sizeof(zahl) / sizeof(char *); i++) {
        printf("Der String '%s' ist als Integer darstellt '%d'\n", zahl[i], ascii2int(zahl[i]));
    }

    return EXIT_SUCCESS;
}