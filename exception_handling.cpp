#include<iostream>
using namespace std;
int main()
{
	int i,j,k,z;
	cout<<"enter the values of a and b : ";
	cin>>i>>j;
	try
	{
		k=i/j;
		cout<<i;
		throw z;
	}
	catch z
		cout<<"denominator cant be zero";	
	finally
	{
		cout<<"this is exception handling.........!!!!"
	}
}
