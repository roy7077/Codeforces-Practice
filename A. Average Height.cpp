#include <iostream>
#include <vector>
using namespace std;

//print function to print vector
void print(vector<int>& v)
{
    for(auto it:v)
    cout<<it<<" ";
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> odd;
	    vector<int> even;
	    
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        
	        if(input&1)
	        odd.push_back(input);
	        else
	        even.push_back(input);
	    }
	    
	    
	    //if odd elements are more than even
	    if(odd.size()>even.size())
	    {
	        print(odd);
	        print(even);
	    }
	    // if even elements are more than odd
	    else
	    {
	        print(even);
	        print(odd);
	    }
	    cout<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*n)