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
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        int ind=0;
        for(int i=0;i<n;i++)
        {
            if(!(v[i]%2))
            {
                swap(v[ind],v[i]);
                ind++;
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(v[i],2*v[j])>1)
                cnt++;
            }
        }
        
        cout<<cnt<<endl;
    }
	return 0;
}

// time _Complexity - O(t * n^2 * log(min(a,b)) )
// log(min(a,b)) is for gcd function


/* we have to swap . if we will not swap then 
   the odd values wil get loss
   6 2 4 2 5 6 1
 */


