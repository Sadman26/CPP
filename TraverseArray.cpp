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

    for (auto i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    return 0;
}