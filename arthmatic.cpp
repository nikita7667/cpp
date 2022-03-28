#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int ch;
    cout<<"enter your choise\n";
    cout<<"1.addition\n";
    cout<<"2.multipilication\n";
    cout<<"3.substraction\n";
    cout<<"4.division\n";
    cin>>ch;


    cout<<"enter two num";
    cin>>a>>b;

     switch(ch)
     {
        case 1:
        cout<<"addition:"<<a+b;
        break;

        case 2:
        cout<<"multipilication:"<<a*b;
        break;

        case 3:
        cout<<"substraction:"<<a-b;
        break;


        case 4:
        cout<<"division:"<<a/b;
        break;


        default:
        cout<<"wrong";
        break;
     }
     return 0;
  }

