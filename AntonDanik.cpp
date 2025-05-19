
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int  n,len1=0,len2=0;
    cin>>n;
    while(n--){
        char s;
        cin>>s;
        if(s=='A')
            len1++;
        else
            len2++;
    }
    if(len1>len2)
        cout<<"Anton";
    else if (len2>len1)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
