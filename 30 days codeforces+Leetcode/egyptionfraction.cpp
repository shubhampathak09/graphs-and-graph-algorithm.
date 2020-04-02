#include<bits/stdc++.h>

using namespace std;


void printegyfrac(int nr,int dr)
{
	
	if(nr==0||dr==0)
	return;
	if(nr%dr==0)
	{
	cout<<nr/dr;
	return;
}
	if(dr%nr==0)
	{
	
	cout<<"1/"<<nr/dr;
	return;
}
	if(nr>dr)
	{
		cout<<nr/dr<<"+";
		printegyfrac(nr%dr,dr);
		return;
	}
	int n=dr/nr+1;
	cout<<"1/"<<n<<"+";
	printegyfrac(nr*n-dr,dr*n);
}

int main()
{
	printegyfrac(17,6);
}
