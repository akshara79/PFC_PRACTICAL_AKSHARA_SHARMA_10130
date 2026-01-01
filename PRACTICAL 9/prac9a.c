//Reverse an array//
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/* output
Enter the number of elements in the array: 4
Enter the elements of the array:
1 2 3 4
Reversed array:
4 3 2 1
*/