//class template with 1 generic type
#include<iostream>
using namespace std;
template<class T>
class sample
{
	private:
		T n;
	public:
		void get()
		{
			cout<<"Enter n value";
			cin>>n;
		}
		void show()
		{
			cout<<"n="<<n<<endl;
		}
};
int main()
{
	sample<int>s1;
	s1.get();
	s1.show();
	sample<char>s2;
	s2.get();
	s2.show();
	sample<float>s3;
	s3.get();
	s3.show();
}
