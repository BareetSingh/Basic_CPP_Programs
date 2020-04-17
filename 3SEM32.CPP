//CPP Program for Multipal Inheritance;
#include<iostream.h>
#include<conio.h>

class A
{
 public:
 int x;

 void getx()
 {
  cout<<"Enter value of x: ";
  cin>>x;
 }
};

class B
{
 public:
 int y;

 void gety()
 {
  cout<<"Enter value of y: ";
  cin>>y;
 }
};

class C:public A,public B
{
 public:
 void sum()
 {
  cout<<"Sum= "<<x+y;
 }
};

void main()
{
 clrscr();
 C obj1;
 obj1.getx();
 obj1.gety();
 obj1.sum();
 getch();
}
/*OUTPUT
Enter value of x: 12
Enter value of y: 31
Sum= 43
*/