#include<bits/stdc++.h>
using namespace std;

 class rect
{
	public:
	 int h=10;
	 int w=10;
	 
	 virtual void area()
	 {
	 	cout<<h*w;
	 }
};


class triangle:public rect
{
	public:
		void area()
		{
			cout<<0.5*h*w;
		}
};

int main()
{
	
	rect r;
	triangle t;
	r=&t;
	
	r->area();
}
