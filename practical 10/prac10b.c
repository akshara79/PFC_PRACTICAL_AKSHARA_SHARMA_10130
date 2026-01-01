//Sum of diagnol elements of 2d array//
#include <stdio.h>
int main()
{
    int arr[10][10], i, j, row, col;
    int sum_diag = 0;

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

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
                sum_diag += arr[i][j];
        }
    }

    printf("Sum of diagonal elements: %d\n", sum_diag);

    return 0;
}
/*output
Enter number of rows and columns: 3 3
Enter elements of the array:
1 2 3
4 5 6
7 8 9
Sum of diagonal elements: 15
*/