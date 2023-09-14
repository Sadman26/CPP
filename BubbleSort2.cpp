// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 1, 3, 2, 43, 54, 66, 7};
    int count = sizeof(arr) / sizeof(arr[0]);
    for (auto i = 0; i < count - 1; i++)
    {
        for (auto j = 0; j < count - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (auto i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}