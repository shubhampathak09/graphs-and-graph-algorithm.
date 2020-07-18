#include<bits/stdc++.h>

using namespace std;



int binarySearch(int n)
{
	
	int start=1;
	int end=n;
	
	
	while(start<=end)
	{
		int mid= (start+end)/2;
	
	//	cout<<1;
		if(mid*mid==n)
		return mid;
		
		else if(mid*mid>n)
		end=mid-1;
		else
		start=mid+1;
	}
	 assert(false);
}

int main()
{
	
	cout<<binarySearch(100);
// logn runtime

}
