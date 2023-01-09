#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
        string str;
        cin>>str;
        
        vector<char> ch;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]!='+')
            ch.push_back(str[i]);
        }
        
        sort(ch.begin(),ch.end());
        str.clear();
        
        for(int i=0;i<ch.size();i++)
        {
            str+=ch[i];
            if(i!=ch.size()-1)
            str+='+';
        }
        
        
        cout<<str<<endl;
    

    return 0;
}