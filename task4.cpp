#include<iostream>
using namespace std;
main()
{
 string name;
 float subj1,subj2,subj3,subj4,subj5,totalMarks=500,percentage,obtained;
 cout<<"Enter Your Name:";
 cin >> name;
 cout << "Enter subject 1 marks:";
 cin >> subj1;
 cout << " Enter subject 2 marks:";
 cin >> subj2;
 cout << "Enter subject 3 marks:";
 cin >> subj3;
 cout <<  "Enter subject 4 marks:";
 cin >> subj4;
 cout << " Enter subject 5 marks:";
 cin >>  subj5;
 obtained=subj1+subj2+subj3+subj4+subj5;
 percentage=(obtained/totalMarks)*100;
 cout <<   "percentage"<<percentage;
}