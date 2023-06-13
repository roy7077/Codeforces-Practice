#include <iostream>
#include <cstring>
using namespace std;

//helper function
bool win(string a,string b)
{
    if(a=="rock" and b=="paper")
    return 0;
    else if("rock" and b=="scissors")
    return 1;
    else if(a=="paper" and b=="rock")
    return 1;
    else if(a=="paper" and b=="scissors")
    return 0;
    else if(a=="scissors" and b=="rock")
    return 0;
    else if(a=="scissors" and b=="paper")
    return 1;
}

// main function
int main() 
{
	strin a,b,c;
	cin>>a>>b>>c;
	
    if(a==b)
    {
        cout<<"?"<<endl;
        return 0;
    }
    
    bool ans=win(a,b);
    int pos;
    if(ans)
    {
        if(a==c)
        {
            cout<<"?"<<endl;
            return 0;
        }
        
        bool ans2=win(a,c);
        if(ans2)
        cout<<"F"<<endl;
        else
        cout<<"S"<<endl;
    }
    else
    {
        if(b==c)
        {
            cout<<"?"<<endl;
            return 0;
        }
        
        bool ans2=win(b,c);
        if(ans2)
        cout<<"M"<<endl;
        else
        cout<<"S"<<endl;
    }
	return 0;
}
