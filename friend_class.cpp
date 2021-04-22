#include<iostream>
using namespace std;
class A
{
	private:
		int x=100;
		void show()
		{
			cout<<x;
		}
	friend class B;
};
class B:private A
{
	public:
		void display()
		{
			cout<<x;
		}
};
int main()
{
	B o;
	o.display();
}
