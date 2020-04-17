//CPP Program for Operator overloading for unary operator;
#include<iostream.h>
#include<conio.h>

class sample
{
 int a;
 public:
 void setdata()
 {
  cin>>a;
 }

 int operator ++()
 {
  int temp=++a;
  return temp;
 }

 void showdata()
 {
  cout<<"\na="<<a;
 }
};

void main()
{
 clrscr();
 sample s1;
 int t;
 cout<<"Enter any number\n";
 s1.setdata();
 cout<<"\n\nYou have entered";
 s1.showdata();
 cout<<"\n\nAfter pre-increment";
 t=++s1;
 cout<<"\nt="<<t;
 s1.showdata();
 getch();
}

/*OUTPUT

Enter any number
12


You have entered
a=12

After pre-increment
t=13
a=13
*/