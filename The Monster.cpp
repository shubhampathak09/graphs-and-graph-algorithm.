// codeforces monster catching rick and morty

#include<bits/stdc++.h>

using namespace std;


int monstercatch(long long a,long long b,long long c,long long d)
{
	return (b-d)/c-a + 1;
	
}

int main(){
	
cout<<monstercatch(20,2,9,19);	
	
}
