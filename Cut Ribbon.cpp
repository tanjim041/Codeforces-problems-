#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c,s=0,i,j,k,r;
    cin >> n >> a >> b >> c;
    for ( i=0; i*a <= n; ++i)
        for ( j = 0; i * a + j * b <= n; ++j)
        {
             r = n - (i * a + j * b);
            if (r% c == 0)
            {
                 k = r / c;
                s = max(s, i + j + k);
            }
        }
    cout << s;
}
