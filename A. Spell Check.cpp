#include <iostream>
#include <unordered_map>
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
        
        string s;
        cin>>s;
        
        //storing characters in map
        unordered_map<char,int> map;
        map['T']=1;
        map['i']=1;
        map['m']=1;
        map['u']=1;
        map['r']=1;
        
        //if length is not equal to 5 an timur has lengh 5
        if(n!=5)
        {
            cout<<"No"<<endl;
            continue;
        }
        
        //checking for characters
        bool flag=1;
        for(auto it:s)
        {
            if(map[it]!=1)
            {
                cout<<"No"<<endl;
                flag=0;
                break;
            }
            else
            {
                map[it]--;
            }
        }
        
        if(flag)
        cout<<"Yes"<<endl;
    }
	return 0;
}

//time _Complexity - O( t * 5 )
