#include <iostream>
#include <string>
using namespace std;

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

    int accu[27] = {0};
    int highest = 0;

    for (int i = 0; i < str1.size(); i++)
    {
        if (((str1[i] - 64) < 27) && ((str1[i] - 64) > 0))
        {
            accu[(str1[i] - 64)] += 1;
            if (accu[(str1[i] - 64)] > highest)
            {
                highest = accu[(str1[i] - 64)];
            }
        }
        else if (((str1[i] - 96) < 27) && ((str1[i] - 96) > 0))

        {
            accu[(str1[i] - 96)] += 1;
            if (accu[(str1[i] - 96)] > highest)
            {
                highest = accu[(str1[i] - 96)];
            }
        }
    }
    cout << flush;

    for (int h = highest; h > 0; h--)
    {

        for (int i = 0; i < 26; i++)
        {
            if (accu[i] == h)
            {
                char tmp = i + 64;
                cout << tmp << " " << accu[i] << endl;
            }
        }
    }

    return 0;
}