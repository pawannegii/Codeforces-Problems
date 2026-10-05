#include <bits/stdc++.h>
using namespace std;

string FirstUpper(string upper)
{
    string new_st;

    new_st += (char)toupper(upper[0]);
    for (int i = 1; i < upper.length(); i++)
    {
        new_st += upper[i];
    }

    return new_st;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    cout << FirstUpper(word);

    return 0;
}