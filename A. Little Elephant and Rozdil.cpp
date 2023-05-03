#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long
 
int main() 
{
	
    ll n;
    cin>>n;
    
    unordered_map<int,int> map;
    int min=1e9;
    int index=0;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        
        if(input<min)
        {
            min=input;
            index=i;
        }
        
        map[input]++;
    }
    
    if(map[min]>1)
    cout<<"Still Rozdil"<<endl;
    else
    cout<<index+1<<endl;
	
	return 0;
}
