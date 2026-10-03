#include <bits/stdc++.h>
using namespace std;

int main()
{
    // These two line makes code fast idk how lol
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    string s1new, s2new;

    for (int i = 0; i < s1.length(); i++)
    {
        s1new += (char)tolower(s1[i]);
    }

    for (int i = 0; i < s2.length(); i++)
    {
        s2new += (char)tolower(s2[i]);
    }

    return 0;
}