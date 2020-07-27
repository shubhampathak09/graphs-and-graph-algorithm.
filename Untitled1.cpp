#include<bits/stdc++.h>
using namespace std;

struct VertexStruct
{
	int x,y,z;
	void setZero(){
		x=0;
		y=0;
		z=0;
	}
	
	void set(float vx,float vy,float vz)
	{
		x=vx;
		y=vy;
		z=vz;
	}
};

int main()
{
VertexStruct v;
//v.x=0;
//v.z=1;
//v.y=2;

//printf("%g",v.x);

//v.setZero();
v.set(1,2,3); 
cout<<v.y;
//printf("%f",v.y);

}
