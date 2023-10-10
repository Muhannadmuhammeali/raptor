#include <iostream>
using namespace std;
int main()
{
int n,i,l;
cout<<"how many Numbers are there ?";
cin>>n;
float NUM[n];
cout<<"Enter the Numbers:";
for (i=0;i<n;i++)
{
cin>>NUM[i];
}
l=NUM[0];
for(i=0;i<n;i++)
{
if (NUM[i]>l)
{
l=NUM[i];
}
}
cout<<"Highest Number among this "<<n<<" are : "<<l<<endl;

}
