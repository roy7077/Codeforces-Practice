#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(!st.empty() and st.top()!=s[i])
        st.pop();
        else 
        st.push(s[i]);
         
    }
    cout<<st.size()<<endl;
    
	return 0;
}

// time _Complexity - O(n)