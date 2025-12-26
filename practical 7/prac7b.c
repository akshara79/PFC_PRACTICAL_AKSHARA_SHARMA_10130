//2. Hourglass of length 2n-1 (stars) akshara sharma 10130//
#include <stdio.h>

int main() {
    int n, i, j, spaces, stars;
    printf("Enter n: ");
    scanf("%d", &n);

    // upper inverted triangle
    for (i = n; i >= 1; i--) {
        spaces = n - i;
        stars  = 2 * i - 1;
        for (j = 0; j < spaces; j++) printf(" ");
        for (j = 0; j < stars;  j++) printf("*");
        printf("\n");
    }

    // lower normal triangle (skip middle row)
    for (i = 2; i <= n; i++) {
        spaces = n - i;
        stars  = 2 * i - 1;
        for (j = 0; j < spaces; j++) printf(" ");
        for (j = 0; j < stars;  j++) printf("*");
        printf("\n");
    }

    return 0;
}
/* output
Enter n: 7
*************
 ***********
  *********
   *******
    *****
     ***
      *
     ***
    *****
   *******
  *********
 ***********
*************
*/
