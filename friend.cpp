//friend function
#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
	public:
		void get()
		{
			x=80;
		}
friend void sum(Demo &d);
};
	void sum(Demo &d)
	{
		int y=45;
		cout<<"Addition of x and y is= "<<d.x+y;
	}
int main()
{
	Demo d;
	d.get();
	sum(d);
}
