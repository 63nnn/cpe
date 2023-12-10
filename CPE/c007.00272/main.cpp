#include <iostream>
using namespace std;

int main()
{
    string str;
    int check = 0;
    while (getline(cin, str))
    {

        int sIndex = 0;
        char *beaf = &str[0], steak[str.length() * 2] = {0};
        for (int i = 0; i < str.length(); i++)
        {
            if (beaf[i] == '"' && check == 0)
            {
                steak[sIndex] = '`';
                steak[sIndex += 1] = '`';
                sIndex += 1;
                check = 1;
                continue;
            }
            if (beaf[i] == '"' && check == 1)
            {
                steak[sIndex] = '\'';
                steak[sIndex += 1] = '\'';
                sIndex += 1;
                check = 0;
                continue;
            }
            steak[sIndex] = beaf[i];
            sIndex += 1;
        }
        for (int i = 0; i < sIndex; i++)
        {
            cout << steak[i];
        }
        cout << endl;
    }

    return 0;
}