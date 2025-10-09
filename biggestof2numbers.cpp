//Biggest of 2 num using inline
#include<iostream>
using namespace std;
inline int big(int a,int b)
{
	return (a>b)?a:b;
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	int biggest=big(n1,n2);
	cout<<"The Biggest Number is ="<<biggest<<endl;
	return 0;
}
