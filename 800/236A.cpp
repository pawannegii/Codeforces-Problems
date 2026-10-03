#include <bits/stdc++.h>
using namespace std;

// i was struggling while converting uppercase to lowercase, so i made a function for that

string UpperToLower(string upper)
{
    string new_lower;

    for (int i = 0; i < upper.length(); i++)
    {
        new_lower += (char)tolower(upper[i]);
    }
    return new_lower;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string user1;
    cin >> user1;

    string newuser = UpperToLower(user1);

    // i was so confused at first that how i can store the no of unique character from my string, then i remember my 11th grade  mathematics chapter Set thery- What a great concept!! I love maths now lol!!

    set<char> s1;

    for (int i = 0; i < newuser.length(); i++)
    {
        s1.insert(newuser[i]);
    }

    if (s1.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}