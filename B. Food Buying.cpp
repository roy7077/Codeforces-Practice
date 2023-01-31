#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int count=0;
        while(n) 
        {
            if(n<10) 
            {
                count += n;
                n=0;
                break;
            } 
            else 
            {
                int s=n/10;
                count+=s*10;
                n%=10;
                n+=s;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

// time _Complexity - O( t* logn (base 10))