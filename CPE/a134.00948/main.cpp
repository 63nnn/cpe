#include <iostream>
using namespace std;

int main()
{
    int fib_length = 38;
    long long int fib[fib_length] = {0};
    fib[0] = 1;
    fib[1] = 2;

    for (int i = 2; i < fib_length; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    long long int reverse_fib[fib_length] = {0};

    for (int i = 0; i < fib_length; i++)
    {
        reverse_fib[i] = fib[fib_length - i - 1];
    }

    int n;
    cin >> n;

    int nums[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    string output = "";
    for (int i = 0; i < n; i++)
    {
        output = "";
        int tmp = nums[i];
        bool flag = true;
        for (int j = 0; j < fib_length; j++)
        {
            if (tmp >= reverse_fib[j])
            {
                flag = false;
                tmp -= reverse_fib[j];
                output += "1";
            }
            else
            {
                if (flag)
                {
                    continue;
                }
                output += "0";
            }
        }
        cout << nums[i] << " = " << output << " (fib)" << endl;
    }

    return 0;
}