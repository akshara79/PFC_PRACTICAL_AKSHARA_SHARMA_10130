//3. Alphabet pattern akshara sharma 10130//
#include <stdio.h>

int main() {
    int i, j;
    int rows = 4;  // for A, AB, ABC, ABCD

    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
/* output
A
AB
ABC
ABCD
*/