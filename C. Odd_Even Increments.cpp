#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> v(n+1);
        for(int i=1;i<=n;i++)
        cin>>v[i];
        
        bool flag=1;
        bool is_even=0;
        for(int i=1;i<=n;i+=2)
        {
            if(i==1)
            {
                if(v[i]%2==0)
                is_even=1;
                else
                is_even=0;
            }
            else
            {
                if((v[i]%2==0 and is_even==0) or (v[i]%2==1 and is_even))
                {
                    flag=0;
                    break;
                }
            }
        }
        
        if(!flag)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        flag=1;
        is_even=0;
        for(int i=2;i<=n;i+=2)
        {
            if(i==2)
            {
                if(v[i]%2==0)
                is_even=1;
                else
                is_even=0;
            }
            else
            {
                if((v[i]%2==0 and is_even==0) or (v[i]%2==1 and is_even))
                {
                    flag=0;
                    break;
                }
            }
        }
        
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}

// time _Complexity - O(t*n)