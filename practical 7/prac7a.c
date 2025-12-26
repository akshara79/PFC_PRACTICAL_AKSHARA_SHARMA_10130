//1. Diamond of length 2n-1 (stars)//

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    // Upper half (including middle)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/* output
Enter the number of rows for the diamond: 4
   *
  ***
 *****
*******
 *****
  ***
   *
   */
