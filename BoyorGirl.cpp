//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main(void)
//{
//    string s1;
//    int count=0;
//    getline(cin,s1);
//    int len=s1.length();
//    for(int i=0;i<len;++i)
//    {
//        for(int j=len;j=0;--j)
//        {
//            if(s1[i]==s1[j])
//                break;
//            else
//            {
//             count++;
//            }
//        }
//    }
//    if(count%2==0)
//        cout<<"CHAT WITH HER!";
//    else
//        cout<<"IGNORE HER!";
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s1;
//    int count = 0;
//    getline(cin, s1);
//    int len = s1.length();
//    for (int i = 0; i < len; ++i)
//    {
//        bool foundDuplicate = false;
//        for (int j = i + 1; j < len; ++j)
//        {
//            if (s1[i] == s1[j])
//            {
//                foundDuplicate = true;
//                break;
//            }
//        }
//        if (!foundDuplicate)
//        {
//            count++;
//        }
//    }
//    if (count % 2 == 0)
//        cout << "CHAT WITH HER!";
//    else
//        cout << "IGNORE HER!";
//}
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    unordered_set<char> uniqueChars;
    for (char c : n)
    {
        uniqueChars.insert(c);
    }
    if (uniqueChars.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

