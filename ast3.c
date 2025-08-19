#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The array is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int row_num, col_num;
    printf("Enter row number to find sum (0 to %d): ", rows - 1);
    scanf("%d", &row_num);
    printf("Enter column number to find sum (0 to %d): ", cols - 1);
    scanf("%d", &col_num);

    int row_sum = 0, col_sum = 0;
    for (int j = 0; j < cols; j++)
    {
        row_sum += arr[row_num][j];
    }
    for (int i = 0; i < rows; i++)
    {
        col_sum += arr[i][col_num];
    }

    printf("Sum of elements in row %d: %d\n", row_num, row_sum);
    printf("Sum of elements in column %d: %d\n", col_num, col_sum);
}