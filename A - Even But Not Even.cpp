//A. Even But Not Even - (codeforces)
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        
        int firstOdd=0;
        int secondOdd=0;
        for(int i=0;i<n;i++)
        {
            int a=int(str[i])-48;
            if(a&1)
            {
                if(firstOdd==0)
                {
                    firstOdd=a;
                }
                else if(secondOdd==0)
                {
                    secondOdd=a;
                }else
                break;
            }
        }
        
        if(firstOdd>0 and secondOdd>0)
        {
            cout<<firstOdd*10+secondOdd<<endl;
        }else
        cout<<"-1"<<endl;
    }

    return 0;
}