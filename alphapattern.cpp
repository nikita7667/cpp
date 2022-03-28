#include <iostream>
using namespace std;

int main()
{
	int i,j,row;
	cout<<"enter number of row";
	cin>>row;
	cout<<"\n";
	cout<<" your pattern";

	for ( i = 1; i <= row; i++)
	{
		for (j = 1; j >= 1; j--)
		{
			cout<<((char)(j-1+65));
		}
		cout<<"\n";
	}
	return 0;
}