#include <stdio.h>

int main()
{
    int pos = -1, N;
    printf("Enter the length of array: ");
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n [ ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\nEnter the number to be searched: ");
    scanf("%d", &N);
    for (int j = 0; j < N; j++)
    {
        if (arr[j] == N)
        {
            pos = 1;
            printf("The number %d is found at index %d", arr[j], j);
            break;
        }
    }

    if (pos == -1)
    {
        printf("The numberis not found");
    }
    return 0;
}