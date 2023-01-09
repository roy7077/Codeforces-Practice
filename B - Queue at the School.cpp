#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    
    string str;
    cin>>str;
    while(t--)
    {
        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i]=='B' and str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    
    cout<<str<<endl;


    return 0;
}