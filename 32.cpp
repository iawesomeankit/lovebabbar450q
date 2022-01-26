#include <iostream>
#include <algorithm>
using namespace std;
void isSubset(int arr1[], int arr2[], int n, int m)
{
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                count++;
                break;
            }
        }
        if (count == m)
        {
            cout << "Yes";
        }
    }
}

int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7}, arr2[] = {11, 3, 9, 1}, n = 6, m = 4;
    isSubset(arr1, arr2, n, m);
    return 0;
}