#include <bits/stdc++.h>
typedef long long l;
using namespace std;

int main(void)
{
    l t, n, x,i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n + 2, 0);
        bool f = true;
        for ( i = 1; i <= n; i++)
        {
            cin >> x;
            if (i == 1)
            {
                v[x] = 1;
                continue;
            }
            if (v[x + 1] || v[x - 1])
                v[x] = 1;
            else
                f = false;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
