#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    //int count=1;
    int final_ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        continue;
        else
        {
            final_ans++;
        }
    }
    
    final_ans++;
    cout<<final_ans<<endl;
    return 0;
}