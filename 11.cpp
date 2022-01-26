#include <iostream>
using namespace std;
/*void unionAndIntersection(int arr1[], int m, int arr2[], int n,int arr3[])
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}
*/

int main()
{
    int arr1[6] = {10, 60, 35, 46, 50, 90}, arr2[4] = {10, 30, 46, 57}, m = 6, n = 4;
    int arr3[10] = arr1[6] + arr2[4];
    cout << arr3[10];
    //unionAndIntersection(arr1, m, arr2, n,arr3);

    return 0;
}