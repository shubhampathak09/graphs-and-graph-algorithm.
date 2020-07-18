// sort characters according to frequency
#include<bits/stdc++.h>
using namespace std;

//looneytoons

int main()
{

string s="looneytoons";
multiset<char>input;

for(int i=0;i<s.length();i++)
{
	
	input.insert(s[i]);
}

for(auto i:input)
cout<<i;

set<char>::iterator it;

cout<<"\t";
for(it=input.begin();it!=input.end();it++)
cout<<*it;

cout<<endl;

for(auto x:input)
cout<<input.count(x);

map<char,int>



}
