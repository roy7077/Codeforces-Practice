#include <iostream>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	int count=0;
	char curr='a';
	for(int i=0;i<s.length();i++)
	{
	    int a=int(curr)-97+122-(int)(s[i])+1;
	    int b=abs(int(s[i])-int(curr));
	    int c=122-int(curr)+int(s[i])-97+1;
	    
	    count+=min(a,min(b,c));
	    curr=s[i];
	}
	cout<<count<<endl;
	return 0;
}

//time _Complexity - O( t * n )
//lowercase alphabet ascii
// a  b  c  d   e   f   g   h   i   j   k   l   m    n   o   p   q   r   s   t   u   v   w   x   y   z
// 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122