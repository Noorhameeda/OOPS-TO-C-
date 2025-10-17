//pure virtual function to calculate area of diff shapes
#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class Rectangle:public shapes
{
	public:
		int length,breadth;
	Rectangle()
	{
		length=80;
		breadth=60;
	}
	void area()
	{
		cout<<"Area of Rectangle is:"<<length*breadth<<endl;
	}
};
class Square:public shapes
{
	public:
		int side;
	Square()
	{
		side=8;
	}
	void area()
	{
		cout<<"Area of Square is:"<<side*side<<endl;
	}
};
class Circle:public shapes
{
	public:
		int radius;
	Circle()
	{
		radius=4;
	}
	void area()
	{
		cout<<"Area of Circle is:"<<2*3.14*radius<<endl;
	}
};
class Triangle:public shapes
{
	public:
		int base,height;
	Triangle()
	{
		base=20;
		height=5;
	}
	void area()
	{
		cout<<"Area of Triangle is:"<<0.5*base*height;
	}
};
int main()
{
	shapes *ptr;
	Rectangle r;
	Square s;
	Circle c;
	Triangle t;
	ptr=&r;
	ptr->area();
	ptr=&s;
	ptr->area();
	ptr=&c;
	ptr->area();
	ptr=&t;
	ptr->area();
	return 0;
}
