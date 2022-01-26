#include <iostream>
#include <algorithm>
using namespace std;
void findLongestConseqSubseq(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] - arr[i] != 1)
        {
            cout << arr[i];
            break;
        }
    }
}

int main()
{
    int arr[] = {2, 6, 1, 9, 4, 5, 3}, n = 7;
    findLongestConseqSubseq(arr, n);
    return 0;
}