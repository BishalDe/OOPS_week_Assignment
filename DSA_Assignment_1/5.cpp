#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    printf("Enter size of the Array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter The Array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a,a+sizeof(a)/sizeof(int));
    cout <<"[ ";
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    cout << "]" << endl;
    return 0;
}
