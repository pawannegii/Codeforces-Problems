#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, times;
    cin >> num >> times;
    int newnum = num;
    for (int i = 0; i < times; i++)
    {
        if (newnum % 10 == 0)
        {
            newnum = newnum / 10;
        }
        else
        {
            newnum = newnum - 1;
        }
    }
    cout << newnum;

    return 0;
}

// not gonna lie but this was so easy still it took me 1.5 hours, i literally cried lol i was solving problems after 10days so yeah habit is important