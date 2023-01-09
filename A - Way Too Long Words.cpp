#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        
        if(str.length()<=10)
        {
          cout<<str<<endl;
          continue;
        }
        
        
        string ans="";
        ans+=str[0]+to_string(str.length()-2)+str[str.length()-1];
        str=ans;
        cout<<str<<endl;
    }

    return 0;
}