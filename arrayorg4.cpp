#include<iostream>
using namespace std;
int main()
{
int a,digit=0,rev=0;
cout<<"Enter a Number to be reversed : ";
cin>>a;
while (a>0)
{
digit=a%10;
a=a/10;
rev=rev*10+digit;
}
cout<<"Reversed Number is "<<rev<<endl;
return 0;
}
