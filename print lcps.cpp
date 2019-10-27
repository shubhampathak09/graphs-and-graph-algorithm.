// printing lonhest coomon palindromic subsequence

// a given string find lcs in string and its reverse


#include<bits/stdc++.h>


int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
	
}


void swap(char *a,char *b)
{
	
	char temp=*a;
	*a=*b;
	*b=temp;
}

using namespace std;




string lcs(string &s1,string &s2)
{
	
	int m=s1.length();
	int n=s2.length();
	
	int L[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	for(int j=0;j<=n;j++)
	{
		if(i==0||j==0)
		L[i][j]=0;
		
		else if(s1[i-1]==s2[j-1])
		L[i][j]=1+L[i-1][j-1];
		
		else
		L[i][j]=max(L[i-1][j],L[i][j-1]);
		
	}
	
	int index=L[m][n];
	
	string lcsstring(index+1,'\0');
	
	int i=m,j=n;
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
		
		lcsstring[index-1]=s1[i-1];
		i--;
		j--;
		index--;
	}
	
	else if(L[i-1][j]>L[i][j-1])
	i--;
	else
	j--;
	}
	
	return lcsstring;
	
}


string lcps(string &s1)
{
	string s2=s1;
	
	int n=s2.length();
	
	for(int i=0;i<n/2;i++)
	{
		swap(&s2[i],&s2[n-1-i]);
		
	}
	
	
return lcs(s1,s2);	


	
//	return s2;
}




int main()
{
	string s1="catboobe";
	cout<<lcps(s1);
	
}
