#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"enter three num";
	cin>>x>>y>>z;
	if ((x>y)&&(x>z))
	{
		cout<<"x is largest";
	}
	else
		if (y>z)
		{
			cout<<"y is largest";
		}
		else
		{
			cout<<"z is largest";
		}
	return 0;
}