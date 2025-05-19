#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,c,i;
    cin >> n;
    while(n--)
    {
        string s,v1;
        cin >> s;
         c = 0;
        vector<string> v;
        for( i = 0; i < s.size(); i++)
        {
            if(s[i] != '0')
            {
                c++;
                string v1(1, s[i]);
                v1+= string(s.size()- i-1,'0');
               v.push_back(v1);
            }
        }
        cout << c << endl;
        for(const auto& n1 : v)
            cout << n1 << " ";
        cout << endl;
    }
}
