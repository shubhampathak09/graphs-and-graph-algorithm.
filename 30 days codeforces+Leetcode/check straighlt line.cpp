/*
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. 
Check if these points make a straight line in the XY plane.

 

 

Example 1:



Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true


*/
#include<bits/stdc++.h>
using namespace std;



bool check(vector<vector<int>>vect)
{
	
 vector<int>x_cordinates,y_cordinates;
 
 int m=vect.size();
 
 for(int i=0;i<6;i++)
 {
 
 x_cordinates.push_back(vect[i][0]);
 y_cordinates.push_back(vect[i][1]);
 
}
 
// for(auto i:x_cordinates)
// cout<<i;
// cout<<endl;
// for(auto i:y_cordinates)
// cout<<i;
 
 //cout<<x_cordinates.size()<<endl;
 //cout<<x_cordinates[x_cordinates.size()-1]<<endl;
 if(x_cordinates[0]==x_cordinates[1])
 {
 	
 	for(auto i:x_cordinates)
 	{
//	 cout<<x_cordinates[i];
 	if(x_cordinates[i]!=x_cordinates[i+1])
 	return false;
 }
 return true;
 	
 }
 
 else
 {
 	
 	int m=(y_cordinates[1]-y_cordinates[0]) / (x_cordinates[1]-x_cordinates[0]);
 	
 	for(int i=1;i<x_cordinates.size();i++)
 	{
 		
 		if(m*(x_cordinates[i]-x_cordinates[0])!=y_cordinates[i]-y_cordinates[0])
 		 return false;
 		
	 }
 	
 	return true;
 }
 
}

int main()
{
	
 vector<vector<int>> v{{1,1},{1,2},{1,3},{1,4},{1,5},{1,6}};
 
 cout<<check(v);
 /* calculate slope
 y2-y1/x2-x1=m;
 if(m*yi-y2
*/	
}
