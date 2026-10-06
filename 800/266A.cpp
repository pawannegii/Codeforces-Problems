#include <iostream>
using namespace std;

int main()
{
    int final = 0;
    int stones;
    string colours;
    cin >> stones;
    cin >> colours;

    for (int i = 0; i < stones - 1; i++)
    {
        if (colours[i] == colours[i + 1])
        {
            final++;
        }
    }

    cout << final;

    return 0;
}