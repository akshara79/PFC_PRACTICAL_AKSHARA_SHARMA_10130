//Row wise sum of 2d array//
#include <stdio.h>
int main()
{
    int arr[10][10], i, j, row, col;

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
Row-wise sum:
Sum of row 1: 6
Sum of row 2: 15
Sum of row 3: 24
*/