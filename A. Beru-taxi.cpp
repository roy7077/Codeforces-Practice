#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() 
{
    double a,b;
    cin>>a>>b;
    
    double n;
    cin>>n;
    
    double mini=1e9;
    while(n--)
    {
        int x,y,vi;
        cin>>x>>y>>vi;
        
        double dis=sqrt((x-a)*(x-a)+(y-b)*(y-b));
        mini=min((double(dis))/vi,mini);
    }
    
    std::cout << std::fixed << std::setprecision(20) << mini;
	return 0;
}

// time _Complexity - O(n*logn)
// space _Complexity - O(1)
