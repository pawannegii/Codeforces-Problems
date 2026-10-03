#include <iostream>
using namespace std;

int main()
{
    int scores[100];
    int totalContestents;
    int playerPosition;
    int qualifiers = 0;
    cin >> totalContestents >> playerPosition;

    for (int i = 0; i < totalContestents; i++)
    {
        cin >> scores[i];
    }

    for (int i = 0; i < totalContestents; i++)
    {
        if (scores[i] <= 0)
        {
            qualifiers = qualifiers + 0;
        }

        else if (scores[i] >= scores[playerPosition])
        {
            qualifiers++;
        }
    }

    cout << qualifiers;

    return 0;
}