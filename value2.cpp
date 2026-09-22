#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter first No:";
cin>>a;
cout<<"Enter second No:";
cin>>b;
cout<<"Before Swapping:";
cout<<a<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After Swapping:";
cout<<a<<b;
return 0;
}

