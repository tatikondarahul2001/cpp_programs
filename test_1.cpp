#include<iostream>
//#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<double> arr = { 1e-1, 1e0, 1e1 };
	duble *ptr = arr.data() +2;
	
	cout<<arr[1] - *ptr;
}
