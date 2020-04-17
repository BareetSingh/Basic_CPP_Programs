#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class student
{
 int roll,age;
 char citizen[10];

 public:
 void setdata()
 {
  cout<<"Enter the Roll Number: ";
  cin>>roll;
  cout<<"Enter the age: ";
  cin>>age;
  cout<<"Enter the Country of the candidate: ";
  gets(citizen);
 }

 void showdata()
 {
  cout<<"\nRoll number: "<<roll<<"\nAge: "<<age<<"\nCountry: "<<citizen<<endl;
 }
};

void main()
{
 clrscr();
 student s[10];
 cout<<"Enter the number of the records: ";
 int n;
 cin>>n;
 cout<<endl;
 for(int i=0;i<n;i++)
 {
  cout<<"...............Enter record "<<i+1<<"...............\n";
   s[i].setdata();
  cout<<endl;
 }

 cout<<endl<<"You have entered following "<<i<<" Records"<<endl;
 for(i=0;i<n;i++)
 {
  cout<<endl<<"............Record "<<i+1<<"............";
  s[i].showdata();
 }
 getch();
}
/* OUTPUT
Enter the number of the records: 2

...............Enter record 1...............
Enter the Roll Number: 12
Enter the age: 15
Enter the Country of the candidate: India

...............Enter record 2...............
Enter the Roll Number: 15
Enter the age: 13
Enter the Country of the candidate: Russia


You have entered following 2 Records

............Record 1............
Roll number: 12
Age: 15
Country: India

............Record 2............
Roll number: 15
Age: 13
Country: Russia
*/
