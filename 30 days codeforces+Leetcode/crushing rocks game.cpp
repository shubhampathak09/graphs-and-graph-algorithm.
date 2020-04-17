#include<bits/stdc++.h>

using namespace std;



int crushrocks(vector<int>str)
{
	
	multiset<int>s;
	
	for(auto x : str)
   {
   	
   	s.insert(x);
   	
   }
   
   
   
   while(s.size()>=2)
   {
   	
   	auto it=s.end();
   	int x=*(--it);
   	int y=*(--it);
   	
   	if(x==y)
   	{
	   
   	s.erase(x);
   	s.erase(y);
   	
   	 
   }
   	
   	else if(x!=y)
   	{
   		s.erase(x);
   	s.erase(y);
   		s.insert(x-y);
   		
   		 
	   }
   
   if(s.size()==0)
   return 0;	
   	
   	
   }
	
	auto it=s.begin();
	
	return *it;
}

int main()
{
	
	vector<int> str={2,7,4,1,8,1};
	vector<int> str1={4,4,4};
	vector<int> str2={};
	
	cout<<crushrocks(str)<<" "<<crushrocks(str1)<<" "<<crushrocks(str2);
	
}
