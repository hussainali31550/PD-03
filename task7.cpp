#include<iostream>
using namespace std;
main()
{
 string name;
 float AdultTickPrice,ChildTickPrice,NAdultTickSold,NChildTickSold,PDonated,totalAmount,finalAmount,Amount;
 cout<<"Enter movie name: ";
 cin >> name;
 cout<<"Enter Adult Ticket Price:";
 cin>> AdultTickPrice;
 cout<<" Enter Child Ticket price:";
 cin>>ChildTickPrice;
 cout<<"Enter Number of Adult Ticket Sold:";
 cin>>NAdultTickSold;
 cout<<"Enter Number of Child Ticket Sold:";
 cin>>NChildTickSold;
 cout<<" Enter Percentage to Donate:";
 cin>> PDonated;
 totalAmount=(AdultTickPrice*NAdultTickSold)+(ChildTickPrice*NChildTickSold);
 cout<<"Total Amount Generated: "<<totalAmount<<endl;
 Amount=(totalAmount*10)/100;
 finalAmount=totalAmount-Amount;
 cout<<"Amount after donation: "<<finalAmount;
}