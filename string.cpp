// Assalamu Alaikum 
// Bm.Shadman Sakib Mahee (Sadman26)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x1, x2;
    x1 = "Sadman";
    x2 = "Sadman";
    if (!x1.compare(x2))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    cout << endl
         << "String size:" << x1.size();
    cout << endl
         << "String length:" << x1.length();
    return 0;
}
