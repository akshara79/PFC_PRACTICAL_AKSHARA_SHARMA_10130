/*Practical 9:
Reverse an array
Max and min element of an array Sum of all even elements of an array
*/
#include <stdio.h>
int main()
{
    int n, i, max, min, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find max and min elements
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    // Sum of all even elements
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("Sum of all even elements: %d\n", sum);

    return 0;
}
/*output
Enter the number of elements in the array: 5
Enter the elements of the array:
1 2 3 4 5
Reversed array:
5 4 3 2 1
Maximum element: 5
Minimum element: 1
Sum of all even elements: 6
*/