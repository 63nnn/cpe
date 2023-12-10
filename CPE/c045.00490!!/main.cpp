#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    char *ss1 = &str1[0], *ss2 = &str2[0];
    int times = (str1.length() > str2.length()) ? str1.length() : str2.length();
    for (int i = 0; i < times; i++)
    {
        }

    return 0;
}