#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    
    string::iterator it=str.begin();
    //reverse(str.begin(),str.end());
    //cout<<str<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            reverse(str.begin(),it+i);
            //cout<<str<<endl;
        }
    }
    
    cout<<str<<endl;
    return 0;
}
//used iterator in this question
//reversing a string
