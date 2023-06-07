#include <iostream>
#include <set>
using namespace std;

//finding all squares function
set<int> st;
void square()
{
    int n=1000;
    for(int i=0;i<=n;i++)
    st.insert(i*i);
}

//main function
int main() 
{
	square();
	int n;
	cin>>n;
	
	int maxi=-1e9;
	bool flag=0;
	while(n--)
	{
	    int input;
	    cin>>input;
	    
	    if(st.count(input)==0)
	    {
	        maxi=max(maxi,input);
	        flag=1;
	    }
	}
	
	if(!flag)
	cout<<"-1"<<endl;
	else
	cout<<maxi<<endl;
	return 0;
}

// time _Complexity - O(1000*log1000)
// space _Complexity- O(1000)