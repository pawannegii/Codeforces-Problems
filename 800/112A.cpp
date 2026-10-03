#include <bits/stdc++.h>
using namespace std;

int main()
{
    // These two line makes code fast idk how lol
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int finalop = 0;
    string s1, s2;
    cin >> s1 >> s2;
    string s1new, s2new;

    if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            s1new += (char)tolower(s1[i]);
        }

        for (int i = 0; i < s2.length(); i++)
        {
            s2new += (char)tolower(s2[i]);
        }
    }
    else
    {
        cout << "Strings Should Be Equal!!!";
    }

    if (s1new == s2new)
    {
        finalop = 0;
    }
    else if (s1new > s2new)
    {
        finalop = 1;
    }
    else if (s1new < s2new)
    {
        finalop = -1;
    }

    cout << finalop;

    return 0;
}