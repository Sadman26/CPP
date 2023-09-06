// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 34, 23, 45, 5, 7, 78, 5};
    int x = 78;
    bool found = false;
    int leen = sizeof(arr) / sizeof(arr[0]);
    for (auto i = 0; i < leen; i++)
    {
        if (arr[i] == x)
        {
            found = true;
            cout << "Found at index " << i << endl;
        }
    }
    cout << "Status: [" << found << "]";

    // Time Complexity: O(n)
    return 0;
}