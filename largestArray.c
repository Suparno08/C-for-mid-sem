#include <stdio.h>

int main()
{
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        printf("Enter %dth element", i);
        scanf("%d", &arr[i]);
    }
    printf("You entered:");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[j] > arr[i])
            {
                max = arr[j];
            }
            else
            {
                max = arr[i];
            }
        }
    }
}
