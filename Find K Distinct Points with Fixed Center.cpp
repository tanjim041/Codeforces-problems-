#include <bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l t, xc, yc, k,sx,sy,x,y,i;
    cin >> t;
    while (t--)
    {
        cin >> xc >> yc >> k;

        if (k == 1)
        {
            cout << xc << " " << yc << endl;
            continue;
        }
        else
        {
            sx = 0, sy = 0;
            for ( i = 1; i < k; i++)
            {
               sx -= i;
                cout << -i << " " << "0"<< endl;
            }
            x = (k * xc) -sx;
            y = (k * yc) ;
            cout << x << " " << y << endl;
        }
    }
}
