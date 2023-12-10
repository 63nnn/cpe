#include <iostream>
using namespace std;

struct robot
{
    int x, y;
    char f;
    int lost = 0;
};

int checkM(int mx, int my, int x, int y)
{
    if (x < mx && y < my && x >= 0 && y >= 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int mx, my;
    cin >> mx >> my; // set map
    int rx, ry;
    char rf;
    int scent[1024][2];
    while (cin >> rx >> ry >> rf)
    {
        robot bot = {rx, ry, rf = toupper(rf)}; // set robot
        string in;
        cin >> in;
        char way[] = {'N', 'E', 'S', 'W'};
        for (int i = 0; i < in.length(); i++)
        {
            switch (in[i] = toupper(in[i]))
            {
            case 'R':
                for (int j = 0; j < 3; j++)
                {
                    if (bot.f == 'W')
                    {
                        bot.f = 'N';
                        break;
                    }
                    if (bot.f == way[j])
                    {
                        bot.f = way[j + 1];
                        break;
                    }
                }
                break;
            case 'L':
                for (int j = 3; j > 0; j--)
                {
                    if (bot.f == 'N')
                    {
                        bot.f = 'W';
                        break;
                    }
                    if (bot.f == way[j])
                    {
                        bot.f = way[j - 1];
                        break;
                    }
                }
                break;
            case 'F':
                switch (bot.f)
                {
                case 'N':
                    bot.y += 1;
                    break;
                case 'E':
                    bot.x += 1;
                    break;
                case 'S':
                    bot.y -= 1;
                    break;
                case 'W':
                    bot.x -= 1;
                    break;
                default:
                    break;
                }
                if (checkM(mx, my, bot.x, bot.y) && bot.lost == 0)
                {
                    bot.lost = 1;
                    cout << bot.x << ' ' << bot.y << ' ' << bot.f << " LOST" << endl;
                    break;
                }
                break;
            default:
                break;
            }
        }
        if (bot.lost == 0)
        {
            cout << bot.x << ' ' << bot.y << ' ' << bot.f << endl;
        }
    }

    return 0;
}