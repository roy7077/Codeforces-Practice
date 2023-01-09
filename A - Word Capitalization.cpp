#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cin>>str;
    
    if(str[0]>='a' and str[0]<='z')
    str[0]=char(int(str[0])-32);
    
    cout<<str<<endl;

    return 0;
}