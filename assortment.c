#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
