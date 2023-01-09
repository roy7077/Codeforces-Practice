#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    bool flag=1;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[s2.length()-1-i])
        {
            flag=0;
            break;
        }
    }
    
    if(!flag)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;


    return 0;
}