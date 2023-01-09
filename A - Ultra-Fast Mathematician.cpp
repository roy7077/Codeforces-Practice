#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    string final_ans="";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        final_ans+='1';
        else
        final_ans+='0';
    }

    cout<<final_ans<<endl;
    return 0;
}