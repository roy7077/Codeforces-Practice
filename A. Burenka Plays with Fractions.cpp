#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
/* ascii value
A=65,Z=90,a=97,z=122
*/
 
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph
 
 
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll temp1=a*d;
        ll temp2=b*c;
        if(temp1==temp2){
            cout<<0<<endl;
        }
        else if(temp1==0 || temp2==0){
            cout<<1<<endl;
        }
        else if(temp1%temp2==0 || temp2%temp1==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}