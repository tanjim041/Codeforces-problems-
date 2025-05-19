#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(void)
{
    string s1, s2;
    getline(cin, s1);
    for (char &c : s1)
    {
        c = tolower(c);
        if (isalpha(c))
        {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
            {
                s2 += '.';
                s2 += c;

            }
        }
    }

    cout << s2;
}

