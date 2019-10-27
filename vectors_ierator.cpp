#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> a;
	 std::vector<double>::const_iterator i;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	
	for(int i=a.begin();i!=a.end();++i)
	{
		
		cout<<(*i);
	}
	
	
}
