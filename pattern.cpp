#include <iostream>
using namespace std;

int main()
{
	int row,m,i,j,k;
	cout<<"enter the number of pattern";
	cin>>row;
	m=row;
	for ( i = 1; i <= row ; i++)
	{
		for (j = 1; j <= m-1; j++)
		{
			cout<<" ";
		}
		for (k=1 ; k <= 1*i-1 ; k++)
		{
			cout<<" *";
		}
		m--;
		cout<<"\n";
	}
	return 0;
}

