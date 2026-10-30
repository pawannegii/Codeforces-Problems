#include <iostream>
#include <string> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int finalres1=0;
    int finalres2=0;
    string matches;
    cin>>matches;
    for (int i = 0; i < matches.length(); i++)
    {
        if (matches[i]=='A')
        {
            finalres1++;
            
        }
        else if (matches[i]=='D')
        {
            finalres2++;
        }
        
    }

    if (finalres1> (matches.length()/2))
    {
        cout<<"Anton\n";
    }
    
    else if (finalres2>(matches.length()/2))
    {
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship";
    }
    
    
    
    return 0;
}