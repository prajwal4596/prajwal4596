#include<iostream>
using namespace std;
int main()
{
int num,ori,n1,n2,n3,rev;
cout<<"Enter no:";
cin>>num;
ori=num;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
num=num/10;

rev=n1*n1*n1+n2*n2*n2+n3*n3*n3+num*num*num;
if (ori==rev)
cout<<"Armstrong number";
else
cout<<"Not a armstrong number";
return 0;
}

