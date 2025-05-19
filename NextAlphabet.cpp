
#include<iostream>
#include<stdio.h>
#include<cString>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c<'z')
        cout<<static_cast<char>(c+1);
else
    printf("a");
}
