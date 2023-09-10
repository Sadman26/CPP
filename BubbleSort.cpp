// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter Elements:" << endl;
    for (auto i = 0; i < n; i++)
    {
        cout << "#" << i << ":";
        cin >> arr[i];
    }
    int leen = sizeof(arr) / sizeof(arr[0]);

    // Sorting with Bubble Sort
    for (auto i = 0; i < leen; i++)
    {
        for (auto j = 0; j < leen; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}