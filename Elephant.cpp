#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l x, c = 0;
    cin >> x;
    while (x > 0)
    {
        if (x >= 5)
        {
            x -= 5;
            c++;
        }
        else if (x >= 4)
        {
            x -= 4;
            c++;
        }
        else if (x >= 3)
        {
            x -= 3;
            c++;
        }
        else if (x >= 2)
        {
            x -= 2;
            c++;
        }
        else if (x >= 1)
        {
            x -= 1;
            c++;
        }
    }
    cout << c;
}
