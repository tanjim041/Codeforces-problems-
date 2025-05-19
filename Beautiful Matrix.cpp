#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l sum=0;
    int arr[5][5];
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            cin>>arr[i][j];
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                sum=abs(i-2)+abs(j-2);
                cout<<sum<<endl;
           }
        }
}
