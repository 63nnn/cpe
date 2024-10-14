#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string strs[100];

    int n = -1, longest = 0;

    while (getline(cin, strs[n + 1]))
    {
        n++;
        if (strs[n].size() > longest)
        {
            longest = strs[n].size();
        }
    }

    for (int i = 0; i < longest; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            if (strs[j].size() >= i + 1)
            {
                cout << strs[j][i];
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}