//multipleparameters using class template
#include<iostream>
using namespace std;
template<class T1,class T2>
class sample
{
	private:
		T1 x;
		T2 y;
	public:
		void get()
		{
			cin>>x>>y;
		}
		void show()
		{
			cout<<"x="<<x<<" "<<"y="<<y<<endl;
		}
};
int main()
{
	sample<int,float>s1;
	cout<<"Enter int,float value";
	s1.get();
	s1.show();
	sample<char,int>s2;
	cout<<"Enter char,int value";
	s2.get();
	s2.show();
	sample<float,char>s3;
	cout<<"Enter float,char value";
	s3.get();
	s3.show();
}
