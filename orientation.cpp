#include<bits/stdc++.h>

using namespace std;

struct point
{
	int x;
	int y;
};


int orientation(point p1,point p2,point p3)
{
	// (y2-y1)*(x3-x2) -(y3-y2)*(x2-x1)
	
	int val=((p2.y-p1.y)*(p3.x-p2.x)) - ((p3.y-p2.y)*(p2.x-p1.x));
	
	if(val==0)
	return 0;   //represents collinear

	else if(val>0)
	return 1;   //orientation is clockwise
	
	else
	return 2;  //orientation is anticloclwise
	
}


int main()
{
	
	point p1={0,0},p2={4,4},p3={1,2};
	
	if(orientation(p1,p2,p3)==0)
	cout<<"collinear";
	
	else if(orientation(p1,p2,p3)==1)
	cout<<"clockwise";
	
	else
	cout<<"anticlockwise";
	
	
}


