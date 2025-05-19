#include <bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l a,i,j,t1;
    cin >> a;
    while (a--)
    {
        string s, t;
        cin >> s >> t;
         t1 = 0;
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                while (t1 < t.size() && t[t1] == s[i])
                    t1++;
                if (t1 < t.size())
                {
                    s[i] = t[t1];
                    t1++;
                }
                else
                    s[i] = 'a';
            }
            else if (t1 < t.size() && s[i] == t[t1])
                t1++;
        }
        j = 0;
        for ( i = 0; i < s.size(); i++)
            if (j < t.size() && s[i] == t[j])
                j++;
        if (j == t.size())
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
           cout << "NO" << endl;
    }
}
