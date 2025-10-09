#include<iostream>
using namespace std;
namespace one
{
	void display()
	{
		int a=5;
		cout<<a;
	}
}
namespace two
{
	void display()
	{
		string m="CSE-";
		cout<<m;
	}
}
int main()
{
	two::display();
	one::display();
	return 0;
}
