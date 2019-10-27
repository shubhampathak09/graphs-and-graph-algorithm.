 #include<iostream>

using namespace std;

int main()
{
	
	int cases;
	
	cin>>cases;
	
	
	int n,m;
	
	while(cases!=0)
	{
	
	
	cin>>n;
	
	cin>>m;
	
	int sum=0;
	
	int s;
	
	for(int i=1;i<n;i++)
	{
		 
		if(i%m==0)
		{
			s=i/m;
			s=s%10;
			sum+=s;
		}
	}
	
	if(n==1&&m==1)
	{
		sum=1;
		cout<<sum;
	}
	else
	cout<<sum;
	
	cases--;
}
}
