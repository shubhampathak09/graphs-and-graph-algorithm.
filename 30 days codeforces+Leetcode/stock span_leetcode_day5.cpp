#include<bits/stdc++.h>

using namespace std;


int buysellstock(int a[],int start,int end)
{
	
	if(end<=start)
	return 0;
	
	int profit=0;
	
	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<end;j++)
		{
			if(a[j]>a[i])
			{
			
			int cur_profit=a[j]-a[i] + buysellstock(a,start,i-1)+buysellstock(a,j+1,end);
			
			profit=max(profit,cur_profit);}
		}
	}
	
	return profit;
}

int main()
{
	
	int price[]={7,1,5,3,6,4};	
	int start=0;
	
	int end=sizeof(price)/sizeof(price[0]);
	
	cout<<buysellstock(price,0,end);
	
	
}
