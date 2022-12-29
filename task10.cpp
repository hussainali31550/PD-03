#include<iostream>
using namespace std;
main()
{
 int rem1,rem2,rem3,rem4,value,fix=10;
 int div1,div2,div3,sum;
 cout<<"enter four number";
 cin>>value;
 rem1=value%fix;
 div1=value/fix;
 rem2=div1%fix;
 div2=div1/fix;
 rem3=div2%fix;
 div3=div2/fix;
 rem4=div3%fix;
 sum=rem1+rem2+rem3+rem4;
 cout<<"sum"<<sum;
}