#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int A_won=0;
    int D_won=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        A_won++;
        else
        D_won++;
    }
    
    if(A_won>D_won)
    cout<<"Anton"<<endl;
    else if(D_won>A_won)
    cout<<"Danik"<<endl;
    else
    cout<<"Friendship"<<endl;
    
    return 0;
}


