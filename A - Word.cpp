#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n=s.length();
    int count_upper=0;
    int count_lower=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' and s[i]<='Z')
        count_upper++;
        else
        count_lower++;
    }
    
    if(count_upper>count_lower)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' and s[i]<='z')
            s[i]=char(int(s[i])-32);
        }
        
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' and s[i]<='Z')
            s[i]=char(int(s[i])+32);
        }
    }
    
    // cout<<count_upper<<" "<<count_lower<<endl;
    cout<<s<<endl;
    return 0;
}