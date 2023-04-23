#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else
        cnt=0;
    }
    
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else
        cnt=0;
    }
    
    cout<<maxi<<endl;
}





// int main() 
// {
// 	int n;
// 	cin>>n;
	
// 	vector<int> v(n);
// 	int maxi=0;
// 	int cnt1=0;
//     int cnt2=0;
//     bool flag=1;
    
// 	for(int i=0;i<n;i++)
// 	{
// 	    cin>>v[i];
	    
// 	    if(v[i]==1 and flag)
// 	    cnt2++;
	    
// 	    if(v[i]==1)
// 	    cnt1++;
// 	    else
// 	    {
// 	        maxi=max(cnt1,maxi);
// 	        cnt1=0;
// 	        flag=0;
// 	    }
// 	}
    
//     if(cnt2<n)
//     cnt2+=v[n-1];
    
//     maxi=max({cnt1,maxi,cnt2});
// 	cout<<maxi<<endl;
	
// 	return 0;
// }

// // time _Complexity - O(N)
