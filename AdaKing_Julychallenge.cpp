#include<bits/stdc++.h>
using namespace std;
// Ada king
int main()
{
	int t;
//	char board[8][8];
cin>>t;
while(t--)
{

	int k;
	cin>>k;
	int blocked=64-k;
	//board[8][8]='O';
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if(i==8&&j==8)
			cout<<"O";
			else if(blocked)
			cout<<"X",blocked--;
			else
			cout<<".";
		}
		cout<<endl;
	}
}
}
