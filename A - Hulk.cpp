#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string final_ans="";
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            
            if(i&1)
            {
                final_ans+="I hate it";
            }else
            {
                final_ans+="I love it";
            }
            break;
        }
        
        if(i&1)
        {
            final_ans+="I hate that ";
        }else
        {
            final_ans+="I love that ";
        }
    }
    cout<<final_ans<<endl;
    return 0;
}