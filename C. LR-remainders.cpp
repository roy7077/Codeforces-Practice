#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    string s;
	    cin>>s;
	    
	    stack<ll> st;
	    int i=0;
	    int j=n-1;
	    for(auto it:s)
	    {
	        if(it=='L')
	        {
	            st.push(v[i]);
	            i++;
	        }
	        else
	        {
	            st.push(v[j]);
	            j--;
	        }
	    }
	    
	    vector<ll> ans;
	    ll mul=1;
	    while(!st.empty())
	    {
	        mul=(mul*st.top())%m;
	        st.pop();
	        ans.push_back(mul);
	    }
	    
	    for(int i=ans.size()-1;i>=0;i--)
	    cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
