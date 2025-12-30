/*Practical 10:
Max and min element in 2D array
Sum of diagnol elements of 2d array Row wise sum of 2d array*/
#include <stdio.h>
int main()
{
    int arr[10][10], i, j, row, col;
    int max, min, sum_diag = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of the array:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    min = arr[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
            if (i == j)
                sum_diag += arr[i][j];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    printf("Sum of diagonal elements: %d\n", sum_diag);

    printf("Row-wise sum:\n");
    for (i = 0; i < row; i++)
    {
        int row_sum = 0;
        for (j = 0; j < col; j++)
        {
            row_sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, row_sum);
    }

    return 0;
}
/*output
Enter number of rows and columns: 3 3
Enter elements of the array:
1 2 3
4 5 6
7 8 9
Maximum element: 9
Minimum element: 1
Sum of diagonal elements: 15
Row-wise sum: 
Sum of row 1: 6
Sum of row 2: 15
Sum of row 3: 24
*/