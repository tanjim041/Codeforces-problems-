#include <bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        string v;
        cin >> v;
        if ((v[0] - '0') + (v[1] - '0') == 1)
        {
            if (v.size() >= 3)
            {
                if (v.size() == 3 && (v[2] - '0') > 1)
                {
                    cout << "YES" << endl;
                }
                else if (v.size() > 3 && v[2] != '0')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

