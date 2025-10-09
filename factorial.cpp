#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==1) //base
	return 1;
	else
	return (n*factorial(n-1)); //recurrsive cell
}
int main()
{
	int x;
	cout<<"enter x vale";
	cin>>x;
   cout<<"factorial for"<<x<<"is:"<<factorial(x);
	return 0;
}
