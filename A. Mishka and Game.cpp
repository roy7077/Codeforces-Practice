#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	vector<pair<int,int>> v(n);
	
	int sum1=0;
	int sum2=0;
	
	for(int i=0;i<n;i++)
	{
	    cin>>v[i].first>>v[i].second;
	    
	    if(v[i].first>v[i].second)
	    sum1++;
	    else if(v[i].first<v[i].second)
	    sum2++;
	}
	
	if(sum1>sum2)
	cout<<"Mishka"<<endl;
	else if(sum2>sum1)
	cout<<"Chris"<<endl;
	else
	cout<<"Friendship is magic!^^"<<endl;
	return 0;
}
