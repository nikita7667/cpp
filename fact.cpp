#include <iostream>
using namespace std;

int main()
{
	int fact,num;
	cout<<"enter numner";
	cin>>num;
	fact=1;
	while(num>0)
	{
		fact=fact*num;
		num--;
	} 
 cout<<"fact of given num"<<fact;
	return 0;
}