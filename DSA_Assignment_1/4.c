#include <stdio.h>
#include <stdlib.h>

int findPeakElement(int nums[], int low, int high, int n)
{

    int mid = (low + high) / 2;

    if ((mid == 0 || nums[mid - 1] <= nums[mid]) &&
        (mid == n - 1 || nums[mid + 1] <= nums[mid]))
    {
        return mid;
    }

    if (mid - 1 >= 0 && nums[mid - 1] > nums[mid])
    {
        return findPeakElement(nums, low, mid - 1, n);
    }
}

int findPeak(int nums[], int n)
{

    if (n == 0)
    {
        exit(-1);
    }

    int index = findPeakElement(nums, 0, n - 1, n);
    return nums[index];
}

int main()
{
    int n, i;
    printf("Enter size of Array :");
    scanf("%d", &n);
    int a[n];
    printf("Enter The Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The Peak Of The Array Is : %d", findPeak(a, n));

    return 0;
}
