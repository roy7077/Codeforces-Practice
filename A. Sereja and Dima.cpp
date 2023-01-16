#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	//sum1- sum of Sereja
	//sum2- sum of Dima
	int sum1=0;
	int sum2=0;
	
	//making two variables which points to 
	//start and end element of an array
	int i=0;
	int j=n-1;
	
	//turn show that which turn is it
	bool turn=1;
	while(i<=j)
	{
	    if(v[i]>=v[j])
	    {
	        if(turn)
	        {
	            sum1+=v[i];
	        }else
	        {
	            sum2+=v[i];
	        }
	        i++;
	        turn=(!turn);
	    }else
	    {
	        if(turn)
	        {
	            sum1+=v[j];
	        }else
	        {
	            sum2+=v[j];
	        }
	        j--;
	        turn=(!turn);
	    }
	}
	
	cout<<sum1<<" "<<sum2<<endl;
	return 0;
}
