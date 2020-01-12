#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>a{1,2,3,4,5,6};
vector<int>b{1,4,9,16,25,36};

sort(a.begin(),a.end());

vector<int>temp(a.size(),0);  // vector<int>(size,value)

for(int i=0;i<a.size();i++)
{ 
//	cout<<b[i]/a[i];
	temp[i]=b[i]/a[i];
}
 
for(int i=0;i<a.size();i++)
cout<<temp[i]; 

int xorsum;

for(int i=0;i<a.size();i++)
{
	xorsum^=b[i]^temp[i];
}

cout<<endl;
cout<<xorsum;
	
}
