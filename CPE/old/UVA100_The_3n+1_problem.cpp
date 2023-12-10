#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        long long int a, b, temp;
        cin >> a >> b;
        if (a > b)
        {
            temp = a;
        }
        else
        {
            temp = b;
        }
        int count = 1;
        while (temp != 1)
        {
            if (temp % 2 != 0)
            {
                temp = temp * 3 + 1;
            }
            else
            {
                temp /= 2;
            }
            count += 1;
        }
        cout << a << " " << b << " " << count << endl;
    }

    return 0;
}