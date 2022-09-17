#include <stdio.h>

int findSmallestMissing(int nums[], int low, int high);

int main()
{
    int n, i;
    printf("Enter size of array :");
    scanf("%d", &n);
    int a[n];
    printf("Enter Array size :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int low = 0, high = n - 1;

    printf("The smallest missing element is %d", findSmallestMissing(a, low, high));

    return 0;
}

int findSmallestMissing(int nums[], int low, int high)
{

    if (low > high)
    {
        return low;
    }

    int mid = low + (high - low) / 2;

    if (nums[mid] == mid)
    {
        return findSmallestMissing(nums, mid + 1, high);
    }
    else
    {

        return findSmallestMissing(nums, low, mid - 1);
    }
}