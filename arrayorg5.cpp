#include<iostream>
using namespace std;
int main()
{
int a,digit=0,rev=0;
cout<<"Enter a Number to get Sum of digits: ";
cin>>a;
while (a>0)
{
digit=a%10;
a=a/10;
rev=digit+rev;
}
cout<<"Sum of digits is "<<rev<<endl;
return 0;
}
