#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char s[100];
    gets(s);
    int len = strlen(s);
    int count0 = 0, count1 = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '0')
        {
            for(int j = i; j < len; j++)
            {
                if(s[j] == '0')
                    count0++;
                else
                    break;
            }
            if(count0 >= 7)
                cout << "YES";
            else
                count0 = 0;
        }
        else if(s[i] == '1')
        {
            for(int j = i; j < len; j++)
            {
                if(s[j] == '1')
                {
                    count1++;
                }
                else
                    break;
            }
            if(count1 >= 7)
                cout << "YES";
            else
                count1 = 0;
        }
    }
    cout << "NO";
}
