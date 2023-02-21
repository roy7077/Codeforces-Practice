#include <iostream>
#include <set>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<int> st;
        
        ll i=1;
        while(1)
        {
            if(i*i<=n)
            st.insert(i*i);
            else
            break;
            
            if(i*i*i<=n)
            st.insert(i*i*i);
            
            i++;
        }
        
        cout<<st.size()<<endl;
    }
    return 0;
}

// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         cout<<i*i<<" ";
//     }
    
//     cout<<endl;
//     int i=1;
//     while(i)
//     {
//         if(i*i*i>100)
//         break;
        
//         cout<<i*i*i<<" ";
//         i++;
//     }
// }

//time _Complexity - o(t*sqrt(n))