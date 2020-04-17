#include<bits/stdc++.h>

using namespace std;



vector<vector<string>> groupAnagrams(vector<string> str)
{
	
	
	 
	 map<string,vector<string>>m;
	 
	 for(string s:str)
	 {
	 	string s2=s;
	 	sort(s2.begin(),s2.end());
	 	
	 	m[s2].push_back(s);
	 }
	
	vector<vector<string>>result;
	
	for(auto it: m)
	{
		result.push_back(it.second);
	}
	
	return result;
}

int main()
{
	
	vector<string>string1={"eat", "tea", "tan", "ate", "nat", "bat"};
	
	vector<vector<string>>output= groupAnagrams(string1);
	
     cout<<output[0];
     
}
