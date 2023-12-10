#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // entry
    int ent;
    cin >> ent;
    for (int i = 0; i < ent; i++)
    {
        int fs;
        cin >> fs;
        int family[fs];
        for (int j = 0; j < fs; j++)
        {
            cin >> family[j];
        }
        // Sort
        for (int j = 0; j < fs - 1; j++)
        {
            for (int k = j + 1; k < fs; k++)
            {
                if (family[k] < family[j])
                {
                    int temp;
                    temp = family[k];
                    family[k] = family[j];
                    family[j] = temp;
                }
            }
        }
        // Find median index
        int mid;
        mid = fs / 2;
        int tatol = 0;
        for (int j = 0; j < fs; j++)
        {
            tatol += abs(family[j] - family[mid]);
        }
        cout << tatol << endl;
    }
    return 0;
}