#include<iostream>
using namespace std;
int main()
{
int   p, a,s1,s2,s3,s4;
cout<<"\n Enter marks for maths:";
cin>>s1;
cout<<"\nEnter marks for physics:";
cin>>s2;
cout<<"\nEnter marks for chemistry:";
cin>>s3;
cout<<"Enter marks for  English:";
cin>>s4;

a=s1+s2+s3+s4;
cout<<"\nAverage marks is:"<<a;
p=a*100/400;
cout<<" \nPercentage obtained is:"<<p;
{
if (p>=90){
cout<<"\nGrade A";
}
else if (p>=80){
cout<<"\nGrade B";
}
else if  (p>=70){
cout<<"\nGrade c";
}
else if (p>=60){
cout<<"\nGrade d";
}
else (p<60);
cout<<"\nFail";

}

return 0;
}


