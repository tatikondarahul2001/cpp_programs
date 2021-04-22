#include<iostream>
using namespace std;
class abc
{
	public:
	int x,y,z;
	void setting(int a , int b)
	{
		x = a;
		y = b;
	}
	abc operator +(abc s)
	{
		abc o2;
		o2.x=x+s.x;
		o2.y=y+o2.y;
		o2.z=o2.x+o2.y;
		cout<<x<<y;
		return o2;
	}
	void display()
	{
		cout<<x<<y;
		cout<<z;
	}
};
int main()
{
	abc o;abc o3;
	o.setting(1,2);
	abc o1;
	o.setting(20,30);
	o3=o+o1;
	o3.display();
}
