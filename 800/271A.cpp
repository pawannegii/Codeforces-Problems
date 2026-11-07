#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    for (int i = year + 1; i < 9999; i++)
    {
        if (

            ((i / 1000) % 10 != (i / 100) % 10) &&
            ((i / 1000) % 10 != (i / 10) % 10) &&
            ((i / 1000) % 10 != i % 10) &&
            ((i / 100) % 10 != (i / 10) % 10) &&
            ((i / 100) % 10 != i % 10) &&
            ((i / 10) % 10 != i % 10))
        {
            cout << i;
            break;
        }
    }

    return 0;
}