#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    double total_orange=0;
    for(int i=0;i<n;i++)
    {
        total_orange+=((double)v[i])/100;
    }
    
    double ans=total_orange/n;
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    std::cout << ans*100;

    return 0;
}