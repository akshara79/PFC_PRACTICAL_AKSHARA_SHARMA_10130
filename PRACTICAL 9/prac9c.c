//Sum of all even elements of an array//
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum of all even elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("Sum of all even elements: %d\n", sum);

    return 0;
}
/* output
Enter the number of elements in the array: 5
Enter the elements of the array:
1 2 3 4 5
Sum of all even elements: 6
*/