#include <iostream>
using namespace std;
void jumpArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr[] = {1, 3, 2, 3, 9, 2}, n = 6;
    jumpArray(arr, n);

    return 0;
}