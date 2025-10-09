#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,R1,R2,d,rpart,ipart;
	cout<< "Enter coefficients a,b and c :";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if (d>0)
	{
		R1=(-b+sqrt(d))/(2*a);
		R2=(-b-sqrt(d))/(2*a);
		cout<< "Roots are real and different."<<endl;
		cout<<"R1="<<R1<<endl;
		cout<<"R2="<<R2<<endl;
	 } 
	else if (d==0)
	{
		R1=R2=(-b)/(2*a);
		cout<<"Roots are real and equal"<<endl;
		cout<<"R1=R2="<<R1<<endl;
	} 
	else
	{
		cout<<"Roots are imaginnary"<<endl;
	} 
	 return 0;
}
