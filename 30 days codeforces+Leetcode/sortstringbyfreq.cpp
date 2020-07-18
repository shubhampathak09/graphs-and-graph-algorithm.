#include<bits/stdc++.h>

using namespace std;


string sortstringfreq(string input)
{
	
	vector<int>frq(128,0);
	
	for(int i=0;i<input.length();i++)
	{
		frq[input[i]-' ']++;
	}
	
	sort(
	input.begin(),input.end(),[&](const char a,const char b)
	{
		if(frq[a-' ']!=frq[b]- ' ')
		return frq[a-' ']> frq[b- ' '];
		else
		return a>b;
		
	}
	);
	return input;
}

int main()
{
	cout<<sortstringfreq("frisbeewowiigghhwwzzzzzwwwww");
}
