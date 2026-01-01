//Max and min element in 2D array//
#include <stdio.h>

int main() {
    int arr[3][3] = {
        {5, 8, 3},
        {12, 7, 9},
        {4, 15, 6}
    };

    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
/* output
Maximum element = 15
Minimum element = 3
*/