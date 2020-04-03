
#include<bits/stdc++.h>

using namespace std;



int main()

{   

    int count=0;
	
	string s="0011100101";
	
	int startindex,lastindex;
	
	for(int i=0;i<s.length();i++)
	if(s[i]=='1')
	{
		startindex=i;
		break;
	}
	
	for(int i=s.length()-1;i>=0;i--)
	if(s[i]=='1')
	{
		lastindex=i;
		break;
	}
	
//	cout<<startindex<<lastindex;
   // int count=0;
    
    for(int j=startindex;j<=lastindex;j++)
    {
    	if(s[j]=='0')
    	count++;
	    //cout<<count;
	}
	 
	 cout<<count;
    //cout<<s[j];
    
   //cout<<count<<startindex<<lastindex;
}
