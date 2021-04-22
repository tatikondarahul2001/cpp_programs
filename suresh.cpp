#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	public:
		char name[100];
		int age;
	void details()
	{
		cout<<"enter your name : ";
		scanf("%s",name[100]);
		cout<<"enter your age : ";
		cin>>age;
	}
	void show()
	{
		cout<<"%s"<<name[100];
		cout<<"the student age is : "<<age;
	}
};
int main()
{
	student suresh;
	suresh.details();
	suresh.show();
	student rahul;
	rahul.details();
	rahul.show();
}
