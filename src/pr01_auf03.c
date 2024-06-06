#include <stdio.h>

#define ARR_SIZE 30

void to_upper_case(char in[], char out[]) {
    for (int i = 0; i < ARR_SIZE; i++) {
        char element = in[i];

        if ((element >= 97) && (element <= 122)) {
            // a-z -> A-Z
            element -= 32;
        } else if ((element == -92) || (element == -74) || (element == -68)) {
            // äöü -> ÄÖÜ
            element -= 32;
        }

        out[i] = element;
    }
}

int main() {
    char input[ARR_SIZE] = "a-6430 ötztal-bahnho";
    char output[ARR_SIZE] = "";

    printf("Original: %s\n", input);
    to_upper_case(input, output);
    printf("Umgewandelt: %s\n", output);
}
