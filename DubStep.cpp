#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    vector<char> v;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
          {
                i += 2;
               v.push_back(' ');
          }
        else
            v.push_back(s[i]);
    }
    for(char c : v)
        cout << c;
}
