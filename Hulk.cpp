#include <bits/stdc++.h>
using namespace std;
int main()
{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 2 == 1)
//            cout << "I hate";
//        else
//            cout << "I love";
//        if (i < n)
//            cout << " that ";
//        else
//            cout << " it";
//    }
vector<string>t;
int n;
cin>>n;
string x;
  while (n--)
    {
        cin>>x;
        t.push_back(x);
    }
for(int i=0;i<t.size();i++)
    cout<<t[i]<<endl;
}
