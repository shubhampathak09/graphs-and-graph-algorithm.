#include<bits/stdc++.h>

using namespace std;


bool constructransomstring(string ransomnote,string magzinenote)
{
//	string ransomnote="adcsddfvf";
	
//	string magzinenote="asdcsdcqwacsdvsfvdf";
	
	vector<int> v(26,0);
	
	for(int i=0;i<magzinenote.size();i++)
	v[magzinenote[i]-'a']++;
	
	
	for(int i=0;i<ransomnote.size();i++)
	{
		
		if(v[ransomnote[i]-'a']==0)
		return false;
		
		v[ransomnote[i]-'a']--;
	}
	
	return true;
}

int main()
{
	
	string ransome="adv";
	
	string magzine="aavcdc";
	
	cout<<constructransomstring(ransome,magzine);
	
	
	
	
}
