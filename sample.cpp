#include<iostream>
using namespace std;
class A
{
	public:
	sum(int x,int y)
	{
	    int a;
		a=x+y;
		cout<<a<<endl;
	}
};
class B
{
	public:
		diff(int x,int y)
		{
			int b;
			b=x-y;
			cout<<b;
		}
};
int main()
{
	A obj1;
	obj1.sum(2,3);
	B obj2;
	obj2.diff(4,5);
	
}
