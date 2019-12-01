 #include<bits/stdc++.h>
 using namespace std;
 
int main()
{
	int N,Q;
	cin>>N>>Q;
	
	int a[N];
	
	for(int i=1;i<=N;i++)
	cin>>a[i];
	
	while(Q>0)
	{
		int parm1,L,R,X;
		cin>>parm1;
		if(parm1==1)         //difference between if and switch came here see?
		{
			cin>>X;
			a[X]=a[X]^1;
			Q--;
		}
		else if(parm1==0)
		{
			cin>>L>>R;
			if(a[R]&1==0)
			cout<<"even";
			else
			cout<<"odd";
			Q--;
		}
	}
	
}
