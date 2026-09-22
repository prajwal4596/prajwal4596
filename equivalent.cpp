#include<iostream>
using namespace std;
int main()
{
int x,rev,b;
cout<<"Enter any 3 digit no:";
cin>>x;
b=x;
rev=(x%10)*100+((x/10)%10)*10+(x/100);
if(b==rev)
cout<<"Reverse is Equivalent";
else 
cout<<"Reverse is not Equivalent";
return 0;
}

