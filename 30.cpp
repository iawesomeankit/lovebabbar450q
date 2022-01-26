#include <iostream>
using namespace std;
void moreThanNdk(int arr[], int n, int k)
{
    int ndk = n / k;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;
            }
        }
        if (count > ndk)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1}, n = 13, k = 4;
    moreThanNdk(arr, n, k);
    return 0;
}