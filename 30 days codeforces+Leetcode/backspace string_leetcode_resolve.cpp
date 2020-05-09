/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
*/

#include<bits/stdc++.h>

using namespace std;



string f(string s)
{
	
	string t;
	//aaa#cd###
	for(auto c:s)
	{
		if(c=='#')
		{
		
		if(t.size()>0)
		t.pop_back();
		}
		else
	       t+=c;	
		
	}
	
	return t;
}

int main()
{
	
	string s="aaa#cd###";  
	
	// a
	cout<<f("ab#c")<<endl;
	cout<<f("ad#c")<<endl;
	cout<<f(s)<<endl;
	
	
}
