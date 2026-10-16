#include <bits/stdc++.h>
using namespace std;

int main()
{
    int uppr = 0;
    int lowr = 0;
    string word;
    string newword;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            uppr++;
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            lowr++;
        }
    }

    if (uppr == lowr)
    {
        for (int i = 0; i < word.length(); i++)
        {
            newword += (char)tolower(word[i]);
        }
    }
    else if (uppr > lowr)
    {
        for (int i = 0; i < word.length(); i++)
        {
            newword += (char)toupper(word[i]);
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            newword += (char)tolower(word[i]);
        }
    }

    cout << newword;
}
