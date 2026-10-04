#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[100];
    string s1;
    cin >> s1;

    int dynamicindex = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (i % 2 == 0)
        {
            arr[dynamicindex] = s1[i] - '0';
            dynamicindex++;
        }
    }

    sort(arr, arr + dynamicindex);

    if (dynamicindex > 0)
    {
        cout << arr[0];
    }

    for (int i = 1; i < dynamicindex; i++)
    {
        cout << "+" << arr[i];
    }

    return 0;
}
