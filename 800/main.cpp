#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int mat[5][5];
    int targetfound = false;
    int targetrow = 0;
    int targetcolumn = 0;
    int finalstep = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                targetfound = true;
                targetrow = i;
                targetcolumn = j;
                break;
            }
            else
            {
                targetfound = false;
            }
        }
    }

    finalstep = abs(targetrow - 2) + abs(targetcolumn - 2);

    cout << finalstep;

    return 0;
}