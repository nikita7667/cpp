#include<iostream>
using namespace std;
int main()
{
	int num ,sum=0,rem;
	cout<<"enter an integer";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
	}
	cout<<"revers number is "<<sum;

	return 0;
}