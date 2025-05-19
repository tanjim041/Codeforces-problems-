#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, c1 = 0, c2 = 0;
    cin >> n;
    vector<int> v(n);
    int e = -1, o = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            c1++;
            e = i + 1;
        }
        else
        {
            c2++;
            o = i + 1;
        }
    }
    if (c1 == 1)
        cout << e;
    else
        cout << o;
}
