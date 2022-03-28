#include<iostream>
using namespace std;
int main()
{
	int num ,sum=0,rem,temp;
	cout<<"enter an integer";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
		
	}
	//cout<<"revers number is "<<sum;
if (sum==temp)
{
	cout<<"num is armstrong";

}else
{
	cout<<"num is not armstrong";
	
}
	return 0;
}
