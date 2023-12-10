#include <iostream>
using namespace std;

int main()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int train;
        cin >> train;
        int car[train] = {0}, trainCount = 0;
        for (int i = 0; i < train; i++)
        {
            cin >> car[i];
        }
        for (int b = 0; b < train - 1; b++)
        {
            for (int a = 0; a < train - b - 1; a++)
            {
                if (car[a] >= car[a + 1])
                {
                    int temp = car[a];
                    car[a] = car[a + 1];
                    car[a + 1] = temp;
                    trainCount += 1;
                }
            }
        }
        cout << "Optimal train swapping takes " << trainCount << " swaps." << endl;
    }

    return 0;
}