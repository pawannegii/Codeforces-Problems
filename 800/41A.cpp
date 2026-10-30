#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <numeric>
#include <climits>
using namespace std;

int main() {
    string s , t;
    int result = 0;
    cin>>s>>t;
    if (s.length()== t.length())
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]==t[t.length() - 1 - i])
            {
                result++;
            }
            
        }

        if (result== t.length())
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        
    }

    else{
        cout<<"NO\n";
    }

    
    return 0;
}