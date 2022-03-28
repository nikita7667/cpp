#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter the number";
	cin>>num;
	cout<<"table of"<<num<<"\n";
	for (i = 1; i <= 10; i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<"\n";
        //cout<<num*i<<"\n";
	}
	return 0;
}