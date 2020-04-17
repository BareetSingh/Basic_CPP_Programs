//CPP Program for Multilevel Inheritance;
#include<iostream.h>
#include<conio.h>

class Base
{
 public:
 int x;

 void getdata()
 {
  cout<<"Enter value of x: ";
  cin>>x;
 }
};

class Derived1 :public Base
{
 public:
 int y;

 void readdata()
 {
  cout<<"\nEnter value of y: ";
  cin>>y;
 }
};

class Derived2 :public Derived1
{
 public:
  int z;
 void indata()
 {
  cout<<"Enter value of z: ";
  cin>>z;
 }
 void product()
 {
  cout<<"\nProduct= "<<x*y*z;
 }
};

void main()
{
 clrscr();
 Derived2 a;
 a.getdata();
 a.readdata();
 a.indata();
 a.product();
 getch();
}
/*OUTPUT
Enter value of x: 12

Enter value of y: 23
Enter value of z: 10

Product= 2760
*/
