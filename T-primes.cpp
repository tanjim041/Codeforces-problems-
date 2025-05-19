#include <bits/stdc++.h>
using namespace std;
typedef long long l;
int main(void)
{
    l n, x, a, i;
    cin >> n;
    while (n--)
    {
        cin >> x;
        a = sqrt(x);
        if (a * a == x)
        {
            bool p= true;
            if (a <= 1)
            p = false;
            else if (a <= 3)
             p= true;
            else if (a % 2 == 0 || a % 3 == 0)
             p= false;
            else
            {
                for (i = 5; i * i <= a; i += 6)
                {
                    if (a % i == 0 || a % (i + 2) == 0)
                    {
                        p = false;
                        break;
                    }
                }
            }
            if (p)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
