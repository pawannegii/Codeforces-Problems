// This version looks simple and compact but time complexity is higher than the qst version

#include <iostream>
using namespace std;

int eval(int x, int y, int z)
{
    int borrow = 0;
    int finalcost = 0;

    for (int i = 1; i <= z; i++)
    {
        if (y < x)
        {
            finalcost = finalcost + x * i;
            borrow = finalcost - y;
        }

        else
        {
            finalcost = finalcost + x * i;
            borrow = finalcost - y;
            if (borrow < 0)
            {
                borrow = 0;
            }
        }
    }

    return borrow;
}

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    cout << eval(k, n, w);
    return 0;
}