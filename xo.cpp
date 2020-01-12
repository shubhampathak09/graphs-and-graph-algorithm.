#include<bits/stdc++.h>

using namespace std;



bool XO(const std::string& str)
{
  // your code here
  
  
  int countx=0;
  int counto=0;
  
  int i=0;
  while(i<str.length())
  {
  
  if(str[i]=='o'||str[i]=='O')
  counto++;
  if(str[i]=='x'||str[i]=='X')
  countx++;
  
  i++;
  
  
  }
  
  if(countx==counto)
  return true;
  else
  return false;
}

int main()
{
	
//	cout<<XO("ooxx");
	
	cout<<XO("xooxx");
}
