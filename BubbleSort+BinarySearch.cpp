// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Bubble Sort
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    // Displaying the array
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // Binary Search
    int x = 12;
    int low, high, mid;
    low = 0;
    high = n - 1;
    bool found = false;
    while (low <= high)
    {
        if (arr[mid] == x)
        {
            found = true;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    if (!found)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}