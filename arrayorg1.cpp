#include<iostream>
using namespace std;
int main()
{
float sal[10];
int i;
cout<<"Enter 10 salaries : ";
for(i=0;i<10;i++)
{
cin>>sal[i];
}
cout<<"Salaries of 10 persons are : ";
for(i=0;i<10;i++)
{
cout<<sal[i]<<endl;
}
return 0;
}
