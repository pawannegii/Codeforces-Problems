// already solved this problem but now wrapped my logic in function

#include <iostream>
using namespace std;

int largebear(int x, int y)
{
    int time = 0;

    if (x == y)
    {
        time = 1;
    }
    else
    {
        for (int i = x; i < y; i += 0)
        {
            x *= 3;
            y *= 2;

            time++;

            if (x > y)
            {
                break;
            }
        }
    }

    return time;
}
int main()
{
    int x, y;
    cin >> x >> y;

    cout << largebear(x, y);

    return 0;
}
