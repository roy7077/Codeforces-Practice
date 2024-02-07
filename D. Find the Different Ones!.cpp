// Time complexity - O(N)
// Space complexity- O(N+N)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    stack<int> st;
	    vector<int> arr(n,1e9);
	    for(int i=n-1;i>=0;i--)
	    {
	        while(!st.empty() and v[i]==v[st.top()])
	        st.pop();
	        
	        if(st.empty())
	        arr[i]=1e9;
	        else
	        arr[i]=st.top();
	        
	        st.push(i);
	    }
	    
	   // for(int i=0;i<n;i++)
	   // cout<<"i -> "<<i<<" value-> "<<arr[i]<<endl;
	    
	    int q;
	    cin>>q;
	    while(q--)
	    {
	        int l,r;
	        cin>>l>>r;
	        
	        if(arr[l-1]<r)
	        cout<<l<<" "<<arr[l-1]+1<<endl;
	        else
	        cout<<"-1 -1"<<endl;
	    }
	}
	return 0;
}
