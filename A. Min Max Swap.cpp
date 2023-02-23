#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> a(n);
        vector<int> b(n);
        int max1=-1;
        int max2=-1;
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        for(int i=0;i<n;i++)
        cin>>b[i];
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            swap(a[i],b[i]);
            
            if(a[i]>max1)
            max1=a[i];
            
            if(b[i]>max2)
            max2=b[i];
        }
        
        cout<<max1*max2<<endl;
        
    }
 
    return 0;
}
 
// time complexity - O(t*n)