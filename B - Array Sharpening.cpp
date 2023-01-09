#include <iostream>
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
        
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int inc = 0; 
        int dec = n-1; 
        
        for(int i = 0;i<n;i++) {
            if(a[i] >= i) {
                inc = i; 
            }
            else break; 
        }
        int cnt = 0;
        for(int i = n-1;i>=0;i--) {
            if(a[i] >= cnt) {
                dec = i; 
            }
            else break;
            
            cnt++; 
        }
        
        if(inc>=dec) 
        cout << "YES"<<endl;
        else 
        cout << "NO"<<endl;
    }

    return 0;
}