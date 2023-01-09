#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cin>>str;
    
    unordered_map<char,int> map;
    for(int i=0;i<str.length();i++)
    {
        map[str[i]]++;
    }

    if(map.size()&1)
    cout<<"IGNORE HIM!"<<endl;
    else
    cout<<"CHAT WITH HER!"<<endl;
    return 0;
}