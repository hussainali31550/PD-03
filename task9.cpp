#include<iostream>
using namespace std;
main()
{
 float Vprice,Fprice;
 int TkgVege,TkgFruits;
 float totalearningV,totalearningF,total,totalRp;
 int pkr=1.94;
 cout<<"Enter vegetable price per Kg";
 cin>>Vprice;
 cout<<" Enter fruit price per Kg";
 cin>>Fprice;
 cout<<"Enter total kilogram of vegetable";
 cin>>TkgVege;
 cout<<"Enter totak kilogram of fruits";
 cin>> TkgFruits;
 totalearningV=Vprice+TkgVege;
 totalearningF=Fprice+TkgFruits;
 total=totalearningV+totalearningF;
 totalRp=total/pkr;
 cout<<"Total Earning in rupees"<<totalRp;
}