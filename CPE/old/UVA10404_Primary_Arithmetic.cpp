#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    do
    {
        int carry_count = 0, temp_carry = 0;
        while (a != 0 && b != 0)
        {
            int temp_a, temp_b;
            temp_a = a % 10;
            temp_b = b % 10;
            a /= 10;
            b /= 10;
            if ((temp_a + temp_b + temp_carry) >= 10)
            {
                carry_count += 1;
                temp_carry = 1;
            }
            else
            {
                temp_carry = 0;
            }
        }
        if (carry_count != 0)
        {
            if (carry_count == 1)
            {
                cout << carry_count << " carry operation." << endl;
            }
            else
            {
                cout << carry_count << " carry operations." << endl;
            }
        }
        else
        {
            cout << "No carry operation." << endl;
        }

        cin >> a >> b;

    } while (a != 0 && b != 0);

    return 0;
}