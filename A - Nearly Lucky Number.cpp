#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    long long count=0;
    while(n)
    {
        int a=n%10;
        if(a==4 or a==7)
        {
            count++;
        }
        n/=10;
    }
    
    if(count==4 or count==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
