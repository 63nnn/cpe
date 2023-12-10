#include <iostream>
using namespace std;

int stringToCharArray()
{

    string s = "test";
    cout << s << endl;

    char *ss = &s[0];
    cout << ss[0] << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << ss[i];
    }

    return 0;
}

struct tt
{
    int i, j;
    char k;
};

void setStruct(tt &in)
{
    in.i = 1;
    in.j = 2;
    in.k = '3';
}

void printStruct(tt &in)
{
    cout << in.i << ' ' << in.j << ' ' << in.k << " end" << endl;
}

int main()
{
    int x = -4 % 4;
    cout << x;
}