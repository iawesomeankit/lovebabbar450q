#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[100][100], arr2[100][100], sum[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter 1st array element";
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter 2st array element";
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "sum is:";
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j];
        }
    }
}