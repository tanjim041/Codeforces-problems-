#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l c=0,s=0;
    string s1;
    getline(cin,s1);
    for(int i=0;i<s1.length();++i)
    {
        if(islower(s1[i]))
            s++;
        else if(isupper(s1[i]))
            c++;
    }

    if(s >= c){
        for(int i = 0; i < s1.length(); ++i)
            s1[i] = tolower(s1[i]);}


    else{
        for(int i = 0; i < s1.length(); ++i)
            s1[i] = toupper(s1[i]);}

    cout<<s1;
}
