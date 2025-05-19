#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int m = -1;
        string b;
        for (int  i = 0; i <= s.length(); ++i)
        {
            for (char c = 'a'; c <= 'z'; ++c)
            {
                string n = s.substr(0, i) + c + s.substr(i);
                int time = 2;
                for (int  j = 1; j < n.length(); ++j)
                {
                    if (n[j] == n[j-1])
                    {
                        time += 1;
                    }
                    else
                    {
                        time += 2;
                    }
                }
                if (time > m)
                {
                    m = time;
                    b = n;
                }
            }
        }
        cout << b << endl;
    }
}
