// mqaximal square

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	vector<vector<int>>matrix={{1,0,1,1,1,0,1},{1,1,1,0,1,1,0},{0,1,1,0,1,1,0},{0,1,1,1,1,1}};
	
	int H=matrix.size();
	int W=matrix[0].size();
	
	vector<vector<int>>dp(H,vector<int>(W));
	
	int ans=0;
	for(int i=0;i<H;i++)
	{
		for(int j=0;j<W;j++)
		{
			if(matrix[i][j]==1)
			{
				dp[i][j]=1;
				if(i>0&&j>0)
				{
					dp[i][j]+=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
				}
			
			ans=max(ans,dp[i][j]);
		}
		}
	}
	
	cout<<"side of largest square.."<<ans<<endl;
	cout<<"area of largest sq.."<<ans*ans;
}
