#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    long long luckycount = 0;
    cin >> n;
    bool final;
    while (n > 0)
    {
        long long digit;
        digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            luckycount++;
        }
        n = n / 10;
    }

    if (luckycount == 4 || luckycount == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

// idk ig im feeling low cuz im hindering in simple things btw got to learn this new concept to access everydigit of integer