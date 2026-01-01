//Max and min element of an array//
#include <stdio.h>
int main() {
    int n, i, max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find max and min elements
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
/* output
Enter the number of elements in the array: 4
Enter the elements of the array:
1 2 3 4
Maximum element: 4
Minimum element: 1
*/