
#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	
	int grid[100][100];
	
	int t;
	cin>>t;
	
	while(t--)
	{
	
	
	int n;
	cin>>n;
	
	
	int trace=0;
	int bad_rows=0;
	int bad_cols=0;
	
	vector<set<int>>row(n+1);
	vector<set<int>>col(n+1);
	
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=n;j++)
		{
			cin>>grid[i][j];
			row[i].insert(grid[i][j]);
			col[j].insert(grid[i][j]);
			
			if(i==j)
			trace+=grid[i][j];
			
		}
	}
	
	for(int r=1;r<=n;r++)
	{
		if(row[r].size()!=n)
		bad_rows++;
		
		if(col[r].size()!=n)
		bad_cols++;
	}
	
	cout<<trace<<" "<<bad_rows<<" "<<bad_cols;
}
}

