//virtual function
#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"show() of base class"<<endl;
		}
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"show() of derived class"<<endl;
		}
};
int main()
{
	Base *bptr,b;
	Derived d;
	bptr=&b;
	bptr->show();  //(*bptr).show();
	bptr=&d;
	bptr->show();
	return 0;
}
