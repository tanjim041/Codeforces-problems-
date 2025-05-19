#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l t,a,i;
    cin >> t;
    while(t--)
    {
        cin >> a;
        if(a % 4 == 0)
        {
            cout << "YES" << endl;
            vector<l> v(a);
            for(i = 0; i < a / 2; i++)
                v[i] = 2 * (i + 1);
            for( i = 0; i < a / 2 - 1; i++)
                v[a / 2 + i] = 2 * i + 1;
            v[a - 1] = v[a / 2 - 1] + a / 2-1;
            for( i = 0; i < a; i++)
                cout << v[i] << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}
