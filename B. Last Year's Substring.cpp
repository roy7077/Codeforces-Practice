#include <cstring>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        bool flag=0;
        for(int i=0;i<=4;i++)
        {
            string t1=s.substr(0,i);
            string t2=s.substr(n-4+i);
            string ans=t1+t2;
            if(ans=="2020")
            {
                cout<<"YES"<<"\n";
                flag=1;
                break;
            }
            if(flag)
            break;
        }
        if(!flag)
        cout<<"NO"<<endl;
    }
    return 0;
}
 
// time complexity - O(t*(n^2))