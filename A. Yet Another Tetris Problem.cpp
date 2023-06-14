#include <iostream>
#include <algorithm>
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
       
       vector<int> v(n);
       int maxi=0;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           maxi=max(maxi,v[i]);
       }
       
       bool flag=1;
       for(auto it:v)
       {
           int height=maxi-it;
           if(height%2)
           {
               flag=0;
               break;
           }
       }
        
       if(flag)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
	return 0;
}

//time _Complexity  - O(t*n)
//space _Complexity - O(N)