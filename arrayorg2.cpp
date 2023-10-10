#include<iostream>
using namespace std;
int main()
{
float price[10];
int i,total=0;
cout<<"Enter 10 price : ";
for (i=0;i<10;i++)
{
cin>>price[i];
} 
cout<<"prices of items are : ";
for (i=0;i<10;i++)
{
cout<<price[i]<<endl;
}
for (i=0;i<10;i++)
{
total=total+price[i];
}
cout<<"Total Price : "<<total;
return 0;
}
