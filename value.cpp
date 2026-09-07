#include<iostream>
using namespace std;
int main()
{
int a,b,c=0;
cout<<"Enter the value for a:";
cin>>a;
cout<<"Enter the value for b:";
cin>>b;
c=a;
a=b;
b=c;
cout<<"a="<<a;
cout<<"b="<<b;
return 0;
}

