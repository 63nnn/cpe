#include <iostream>
using namespace std;

int alg(int temp)
{
    int count = 1;
    while (temp != 1)
    {
        int oo = temp % 2;
        if (oo == 1)
        {
            temp = 3 * temp + 1;
        }
        else if (oo == 0)
        {
            temp = temp / 2;
        }
        count += 1;
    }
    return count;
}
int main()
{
    int first, second;
    while (cin >> first >> second)
    {
        int bottom, top;
        if (first > second)
        {
            top = first;
            bottom = second;
        }
        else
        {
            top = second;
            bottom = first;
        }
        int compare = 0;
        for (int i = bottom; i <= top; i++)
        {
            int temp = alg(i);
            if (compare < temp)
            {
                compare = temp;
            }
        }
        cout << first << " " << second << " " << compare << endl;
    }
    return 0;
}