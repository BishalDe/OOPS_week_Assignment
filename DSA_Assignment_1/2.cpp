#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
                printf("The Repeated Value is : %d ", a[i]);
        }
    }
    return 0;
}