#include<iostream>
using namespace std;
main()
{
 int intialVelocity,time,acceleration,finalVelocity;
 cout<<"Enter Intial Velocity:";
 cin>>intialVelocity;
 cout<<"Enter Time:";
 cin>>time;
 cout<<"Enter Acceleration:";
 cin>>acceleration;
 finalVelocity=intialVelocity+acceleration*time;
 cout<<"Final Velocity:"<<finalVelocity;
}