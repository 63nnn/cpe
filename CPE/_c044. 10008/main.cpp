#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    cin.get();

    string str1 = "";

    for (int i = 0; i < n; i++)
    {
        string buffer;
        getline(cin, buffer);
        str1 += buffer;
    }

    int accu[26] = {0};

    for (int i = 0; i < str1.size(); i++)
    {
        if (((str1[i] - 64) < 27) && ((str1[i] - 64) > 0))
        {
            accu[(str1[i] - 64)] += 1;
        }
        else if (((str1[i] - 96) < 27) && ((str1[i] - 96) > 0))

        {
            accu[(str1[i] - 96)] += 1;
        }
    }

    sort(accu, accu + 26, compare);
    for (int i = 0; i < 26; i++)
    {

        if (accu[i] != 0)
        {
            char tmp = i;
            cout << tmp << " " << accu[i] << endl;
        }
    }

    return 0;
}