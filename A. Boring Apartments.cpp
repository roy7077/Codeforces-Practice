#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(vector<int>& v)
{
    for(int i=1;i<=9;i++)
    {
        int n=i;
        while(n<=10000)
        {
            v.push_back(n);
            n*=10;
            n+=i;
        }
    }
}

//length of number
 
int countDigit(int n) {
  return floor(log10(n) + 1);
}
 
int main() {
	
    //pre array
	vector<int> v;
	solve(v);
	
// 	for(int i=0;i<v.size();i++)
// 	cout<<v[i]<<endl;
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int count=0;
        int i=0;
        for(i;v[i]!=n;i++){
        // {   cout<<v[i]<<" ";
        //     cout<<"ans"<<endl;
            count+=countDigit(v[i]);
        }
        
        if(v[i]==n)
        count+=countDigit(v[i]);
        
        // cout<<endl;
        cout<<count<<endl;
    }
    
	return 0;
}
