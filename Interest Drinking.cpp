#include <bits/stdc++.h>
typedef long long l;
using namespace std;

int main(void)
{
    l n, i, x, s, a;
    cin >> n;
    vector<l> v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cin >> x;
    while (x--)
    {
        s=0;
        cin >> a;
        s = upper_bound(v.begin(), v.end(), a) - v.begin();
        cout << s << endl;
    }
}



