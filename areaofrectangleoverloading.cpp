//area of rectangle using constructor overloading
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length,breadth;
	public:
		Rectangle()
		{
			length=7.5;
			breadth=6.5;
		}
		Rectangle(float x,float y)
		{
			length=x;
			breadth=y;
		}
		Rectangle(float x)
		{
			length=x;
			breadth=x;
		}
		void area()
		{
			cout<<"Area of rectangle="<<length*breadth<<endl;
		}
};
int main()
{
	Rectangle r1;
	Rectangle r2(4.5f);
    Rectangle r3(2.3f,5.6f);
    r1.area();
    r2.area();
    r3.area();
    return 0;	
}
