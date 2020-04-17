//CPP Program for Hybrid Inheritance;
#include<iostream.h>
#include<conio.h>

class A
{
 public:
 int x;
};

class B:public A
{
 public:
 B()
 {
  x=10;
 }
};

class C
{
 public:
 int y;
 C()
 {
  y=4;
 }
};

class D:public B,public C
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
 D obj1;
 obj1.sum();
 getch();
}
/*OUTPUT
Sum= 14
*/