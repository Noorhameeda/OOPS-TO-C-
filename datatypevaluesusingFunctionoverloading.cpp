//printing datatype values using Function overloading
#include<iostream>
using namespace std;
class sample
{
	public:
		void show()
		{
			cout<<"Function with no parameters"<<endl;
		}
		void show(int i)
		{
			cout<<"Enter Integer value="<<i<<endl;;		
		}
		void show(float f)
		{
			cout<<"Floating value="<<f<<endl;
		}
		void show(char c)
		{
			cout<<"Character value="<<c<<endl;
		}
		void show(char*s)
		{
			cout<<"String value="<<s<<endl;
		}
		void show(double d)
		{
			cout<<"Double value="<<d<<endl;
		}
		void show(bool b)
		{
			cout<<"Boolean value="<<b<<endl;
		}
};
int main()
{
	sample s;
	s.show();
	s.show("Noorhameeda");
	s.show('$');
	s.show(2.34f);
	s.show(45.67);
	s.show(10);
	s.show(true);
	s.show(false);
	return 0;
}
