#include <iostream>
using namespace std;

int main()
{
    
    int a,b;
    cin>>a>>b;
    
    for(int i=1; ;i++)
    {
        if(a>b)
        {
            cout<<i-1<<endl;
            break;
        }
        a*=3;
        b*=2;
    }

    return 0;
}