// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Sadman");
    q.push("Sakib");
    q.push("Mahee");
    cout << "Queue Size: " << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}