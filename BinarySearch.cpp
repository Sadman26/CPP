// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 55, 60};
    int leen = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int low, high, mid;
    bool found_status = false;
    low = 0;
    high = leen - 1;
    while (low <= high)
    {
        if (arr[mid] == x)
        {
            found_status = true;
            cout << "Found At index " << mid;
            break;
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
    if (!found_status)
    {
        cout << "Not Found";
    }
    return 0;

    // Time Complexity: O(log2(n))
}