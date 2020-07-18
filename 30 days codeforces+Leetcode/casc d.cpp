#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	
	v.front()+=v.back();
	cout<<v.front();
}
