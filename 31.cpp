#include <iostream>
using namespace std;
int maxProfit(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int cprofit = 0, mprofit = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                cprofit = 0;
                mprofit = 0;
                break;
            }
            else if (arr[i] < arr[j])
            {
                cprofit = arr[j] - arr[i];
            }
            if (cprofit > mprofit)
            {
                mprofit = cprofit;
            }
            else
            {
                break;
            }

            count = count + mprofit;
        }
        return count;
    }
}

int main()
{
    int arr[] = {2, 30, 15, 10, 8, 25, 80}, n = 7;
    int profit = maxProfit(arr, n);
    cout << profit;
    return 0;
}