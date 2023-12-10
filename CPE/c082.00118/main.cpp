#include <iostream>
using namespace std;

int checkM(int mx, int my, int x, int y) // 1 for out of margin
{
    if (x >= 0 && y >= 0 && x <= mx && y <= my)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int mx, my;
    cin >> mx >> my;
    int rx, ry, rf; // rf = face index
    char rfTtemp;   // face char
    int scent[1024][2], scentCount = 0;
    char way[] = {'N', 'E', 'S', 'W'};
    while (cin >> rx >> ry >> rfTtemp)
    {

        if (checkM(mx, my, rx, ry))
        {
            continue;
        }
        int lost = 0;
        for (int i = 0; i < 4; i++) // config face char to index
        {
            if (rfTtemp == way[i])
            {
                rf = i;
            }
        }
        string command;
        cin >> command;
        for (int i = 0; i < command.length(); i++)
        {
            command[i] = toupper(command[i]);
            if (command[i] == 'R')
            {
                rf = (rf + 1) % 4;
            }
            else if (command[i] == 'L')
            {
                rf = (rf - 1 + 4) % 4;
            }
            else if (command[i] == 'F')
            {
                int bx = rx, by = ry;
                switch (rf)
                {
                case 0:
                    ry += 1;
                    break;
                case 1:
                    rx += 1;
                    break;
                case 2:
                    ry -= 1;
                    break;
                case 3:
                    rx -= 1;
                    break;
                default:
                    break;
                }
                for (int j = 0; j < scentCount; j++)
                {
                    if (bx == scent[j][0] && by == scent[j][1] && checkM(mx, my, rx, ry) == 1)
                    {
                        rx = bx;
                        ry = by;
                    }
                }
                if (checkM(mx, my, rx, ry) == 1)
                {
                    lost = 1;
                    cout << bx << ' ' << by << ' ' << way[rf] << " LOST" << endl;
                    scent[scentCount][0] = bx;
                    scent[scentCount][1] = by;
                    scentCount += 1;
                    break;
                }
            }
        }
        if (lost == 0)
        {
            cout << rx << ' ' << ry << ' ' << way[rf] << endl;
        }
    }
    return 0;
}