#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a+b+c>=2)
        count++;
    }

    cout<<count<<endl;
    return 0;
}