#include <iostream>
using namespace std;

int main()
{
    int final = 0;
    int friends;
    int maxheight;
    int kidsheight[1000];
    int score[1000];
    cin >> friends >> maxheight;
    for (int i = 0; i < friends; i++)
    {
        cin >> kidsheight[i];
    }

    for (int i = 0; i < friends; i++)
    {
        if (kidsheight[i] <= maxheight)
        {
            score[i] = 1;
        }
        else
        {
            score[i] = 2;
        }
    }

    for (int i = 0; i < friends; i++)
    {
        final += score[i];
    }
    cout << final;

    return 0;
}