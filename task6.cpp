#include <iostream>
using namespace std;
main()
{
 float size,cost,area,perPoundCost,perSquareCost;
 cout<<"Enter bag size in pound: ";
 cin>>size;
 cout<<" Enter cost of the bag: ";
 cin>>cost;
 cout<<"Enter area covered by each bag in square foot: ";
 cin>>area;
 perPoundCost=cost/size;
 cout<<"Cost of the fertilizer per pound:"<<perPoundCost<<endl;
 perSquareCost=size*area;
 cout<<"Cost of fertilizing the area per squrae feet: "<<perSquareCost;
}

 
 