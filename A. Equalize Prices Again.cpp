#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            sum+=input;
        }
        
        sum = ceil((double)sum/n);
        cout<<sum<<endl;
        // if(sum%n==0)
        // cout<<(sum/n)<<endl;
        // else
        // cout<<((sum+1)/n)<<endl;
    }
	return 0;
}
 
// time complexity - O(t*n)
/* there is a important thing to learn in this question
 if we do cout<<ceil(double(sum)/n<<endl;
 then it will not paas all the test cases
 becuase ans is to large
 
 1st we have to store it into some ll type variable
 like
 sum = ceil((double)sum/n);
        cout<<sum<<endl;
*/