#include <cstring>
#include <vector>
using namespace std;
 
//arrange according to even numbers
void sort_even(vector<int>& even)
{
    int index=0;
    for(int i=0;i<even.size();i++)
    {
        if(even[i]%2)
        {
            swap(even[index],even[i]);
            index++;
        }
    }
}
 
//arrange according to odd numbers
void sort_odd(vector<int>& odd)
{
    int index=0;
    for(int i=0;i<odd.size();i++)
    {
        if(odd[i]%2==0)
        {
            swap(odd[index],odd[i]);
            index++;
        }
    }
}
 
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    vector<int> even,odd;
	    for(int i=0;i<str.length();i++)
	    {
	        if(i%2==0)
	        odd.push_back(str[i]-'0');
	        else
	        even.push_back(str[i]-'0');
	    }
	    
	    sort_even(even);
	    sort_odd(odd);
	    
	    bool flag=1;
	    int i=0;
	    int j=0;
	    
	    for(int k=0;k<str.length();k++)
	    {
	        if(i>=odd.size() or j>=even.size())
	        break;
	        
	        if(flag)
	        {
	            if(i>=odd.size())
	            break;
	            
	           // cout<<"odd->" <<odd[i]<<" ";
	            i++;
	            flag=(!flag);
	        }
	        else
	        {
	            if(j>=even.size())
	            break;
	            
	            //cout<<"even->"<<even[j]<<" ";
	            j++;
	            flag=(!flag);
	        }
	    }
	    //cout<<endl;
	    
	    if(i<odd.size())
	    {
	        if(odd[odd.size()-1]&1)
	        cout<<"1"<<endl;
	        else
	        cout<<"2"<<endl;
	    }
	    
	    if(j<even.size())
	    {
	        if(even[even.size()-1]&1)
	        cout<<"1"<<endl;
	        else
	        cout<<"2"<<endl;
	    }
	    
	}
	return 0;
}