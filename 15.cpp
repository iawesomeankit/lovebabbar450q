#include <iostream>
using namespace std;
int jumpArray(int arr[], int n)
{
    int jump = 0, count = 1;
    for (int i = jump; i < n;)
    {
        count++;

        jump = arr[i];
    }
    return count;
}
int main()
{
    int arr[] = {1, 3, 5, 4, 9, 2}, n = 6;
    int jump1 = jumpArray(arr, n);
    cout << jump1;

    return 0;
}