#include <iostream>
using namespace std;

int eval(int x, int y, int z)
{
    int borrow = 0;
    int onebananacost = x;
    int dollars = y;
    int totalbanana = z;
    int finalcost = 0;

    if (dollars < onebananacost)
    {
        for (int i = 1; i <= totalbanana; i++)
        {
            finalcost = finalcost + onebananacost * i;
            borrow = finalcost - dollars;
        }
    }

    else
    {
        for (int i = 1; i <= totalbanana; i++)
        {
            finalcost = finalcost + onebananacost * i;
            borrow = finalcost - dollars;
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