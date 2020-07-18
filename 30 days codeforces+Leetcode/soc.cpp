// sorting small alphabets accroding to freq
#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> a(26,0);   ///abcdcksdmcsdcdckdk
	
	
	string s="zombiesaaaaaaaaaaatmyneighboursoo";
	
	for(int i=0;i<s.length();i++)
	a[s[i]-'a']++;
	sort(s.begin(),s.end(),[&](const char &x,const char &y)
	{
	if(a[x-'a']!=a[y-'a'])
	return a[x-'a']>a[y-'a'];
	else
	return x>y;
	});
	cout<<s;
	
}
