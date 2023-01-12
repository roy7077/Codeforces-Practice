#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int temp=n;
	    int cnt=0;
	    int final_count=0;
	    vector<int> ans;
	    while(n)
	    {
	        int last=n%10;
	        n/=10;
	        
	        //if last digit is not 0 then need to make round
	        if(last!=0)
	        {
	            final_count++;
	            ans.push_back(last*pow(10,cnt));
	            //cout<<last*pow(10,cnt)<<" ";
	        }
	        cnt++;
	    }
	    
	    //if number is already round then push_back n into ans vector
	    if(final_count==0)
	    {
	        cout<<"1"<<endl;
	        ans.push_back(temp);
	    }
	    else
	    cout<<final_count<<endl;
	    
	    for(auto it:ans)
	    cout<<it<<" ";
	    cout<<endl;
	}
	return 0;
}
