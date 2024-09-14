#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main
{
    int n, m;
    cin >> n >> m;

    int ori[n], aft[n];

    return 0;
}

void arrp(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << setw(3) << arr[i];
    }
}

int main()
{
    int x[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        x[i] = rand() % 100;
    }
    cout << endl;

    for (auto i : x)
    {
        cout << i << " ";
    }

    return 0;
}