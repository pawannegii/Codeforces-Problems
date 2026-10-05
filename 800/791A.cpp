#include <iostream>
using namespace std;

int main()
{
    int time = 0;
    int x, y;
    cin >> x >> y;

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

    cout << time;

    return 0;
}
