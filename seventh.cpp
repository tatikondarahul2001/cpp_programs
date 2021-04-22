#include<iostream>

using namespace std;
namespace universe{
	int galaxy=1;
}
namespace universe{
	int planet = galaxy+2;
}
int main()
{
universe::galaxy*=2;
{
	using namespace universe;
	planet++;
}
cout<<universe::galaxy<<universe::planet;
}
