#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    int a[100][100];
    cout << "Enter The Row : ";
    cin >> m;
    cout << "Enter The Column : ";
    cin >> n;
    for (i = 0; i < m; i++)
    {
        cout << "[[";
        for (j = 0; j < n; j++)
        {
            a[i][j] = i * j;
            cout << a[i][j] << ",";
        }
        cout << "]"
             << ",";
    }
    cout << "]";
    return 0;
}