#include<iostream>
#include <cstring>
using namespace std;

int main()
{
  string str1,str2;
  cin>>str1>>str2;
  
  for(int i=0;i<str1.length();i++)
  {
    if(int(str1[i])>=65 and int(str1[i])<=90)
    str1[i]=char(int(str1[i])+32);
    
    if(int(str2[i])>=65 and int(str2[i])<=90)
    str2[i]=char(int(str2[i])+32);
  }
  
  for(int i=0;i<str1.length();i++)
  {
    if(str1[i]>str2[i])
    {
      
      cout<<"1"<<endl;
      return 0;
    }
    else if(str2[i]>str1[i])
    {
      cout<<"-1"<<endl;
      return 0;
    }
  }
  
  cout<<"0"<<endl;
  
}