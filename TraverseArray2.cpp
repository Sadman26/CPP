// Assalamu Alaikum 💖
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name = "Sadman Sakib Mahee is a good boy and he knows what to do and what not to do";
    int leen = sizeof(name) / sizeof(name[0]);
    for (auto i = 0; i < leen; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '_';
        }
        cout << name[i] << "";
    }

    return 0;
}