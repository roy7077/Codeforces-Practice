#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        
        int cnt=0;
        int i=0;
        for(i=0;i<str.length();)
        {
            unordered_map<char,int> map;
            int count=0;
            for(;i<str.length();i++)
            {
                if(count>=3 and (map.count(str[i])==0))
                break;
                
                if(map.count(str[i])==0)
                {
                    count++;
                    map[str[i]]++;
                }
                else
                map[str[i]]++;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
	return 0;
}

// time _Complexity - O(t*n)