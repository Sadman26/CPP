// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> stk;
    stk.push("Sadman");
    stk.push("Sakib");
    stk.push("Mahee");
    cout << "Stack Size: " << stk.size() << endl;
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}