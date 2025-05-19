#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int>v;
    int n,x;
    cin>>n;
    bool flag;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
        if (flag==false)
            break;
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
