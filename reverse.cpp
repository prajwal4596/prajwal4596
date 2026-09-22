#include<iostream>
using namespace std;
int  main()
{
int x,rev;
cout<<"Enter any 3 digit no:";
cin>>x;
rev=(x%10)*100+((x/10)%10)*10+(x/100);
cout<<"Reverse="<<rev;
return 0;
}


