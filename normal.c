
#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (b > c)
        {
            cout << c << " " << b << " " << a;
        }
        else
        {
            if (a > c)
            {
                cout << b << " " << c << " " << a;
            }
            else
            {
                cout << b << " " << a << " " << c;
            }
        }
    }
    else
    {
        if (a > c)
        {
            cout << c << " " << a << " " << b;
        }
        else
        {
            if (b > c)
            {
                cout << a << " " << c << " " << b;
            }
            else
            {
                cout << a << " " << b << " " << c;
            }
        }
    }
}
