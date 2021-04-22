#include<iostream>
using namespace std;
inline int sum(int a, int b)
{
	return a+b;
}
int main()
{
	int a,b,c;
	cout<<"enter the values of a and b"<<endl;
	cin>>a>>b;
	c=sum(a,b);
	cout<<"the sum of two number is : "<<c;
}
