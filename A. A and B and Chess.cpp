#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char,int> map;
void function()
{
    //for white spaces
    map['Q']=9;
    map['R']=5;
    map['B']=3;
    map['N']=3;
    map['P']=1;
    map['K']=0;
    
    //for black spaces
    map['q']=9;
    map['r']=5;
    map['b']=3;
    map['n']=3;
    map['p']=1;
    map['k']=0;

    return ;
}

int main() 
{
    function();
	int white=0;
	int black=0;
	
	for(int i=0;i<8;i++)
	{
	    char input;
	    for(int j=0;j<8;j++)
	    {
	        cin>>input;
	        if(input>='a' and input<='z')
	        black+=map[input];
	        else if(input>='A' and input<='Z')
	        white+=map[input];
	    }
	}
	
	if(white>black)
	cout<<"White"<<endl;
	else if(black>white)
	cout<<"Black"<<endl;
	else
	cout<<"Draw"<<endl;
	return 0;
}

// time _Complexity - O(12+(8*8))
