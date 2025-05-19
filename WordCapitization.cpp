#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    if (!s1.empty())
    {
        s1[0] = toupper(s1[0]);
    }
    cout << s1 << endl;
}
