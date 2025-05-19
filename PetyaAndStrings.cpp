//#include<iostream>
//using namespace std;
//int main(void)
//{
//    char s1[100],s2[100];
//
//}
#include <iostream>
#include <string>
using namespace std;
int compareStrings(const string& str1, const string& str2)
 {
    int len = str1.length();
    for (int i = 0; i < len; ++i)
        {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);
        if (c1 < c2)
            return -1;
        else if (c1 > c2)
            return 1;
    }
    return 0;
}
int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int result = compareStrings(str1, str2);
    cout << result << endl;
}




