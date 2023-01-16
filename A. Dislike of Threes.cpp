#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	//making array of integers which is not 
	//divisible by 3 and whose last digit is not 3
	vector<int> v;
	v.push_back(0);
	
	int n=0;
	int i=1;
	while(n<=1000)
	{
	    int temp=i%10;
	    if(i%3!=0 and temp!=3)
	    {
	        v.push_back(i);
	        n++;
	    }
	    
	    i++;
	}
	
	//taking test cases
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    cout<<v[x]<<endl;
	}
	return 0;
}
