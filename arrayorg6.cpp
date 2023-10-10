#include<iostream>
using namespace std;
int main()
{
int a,b=0,i=0,j=0;
int c[32];
cout<<"Enter a Number : ";
cin>>a;
while (a>0)
{
b = a % 2;
a = a / 2;
c[i]=b;
i++;
}
for(int j=i-1;j>=0;j--)
{
cout<<c[j];
}
 return 0;
}
