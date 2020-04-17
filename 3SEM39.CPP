#include<iostream.h>
#include<conio.h>
class Base
{
 public:
 void display()
 {
  cout<<"\nDisplay Base";
 }
};

class Derived: public Base
{
 public:
 void display()
 {
  cout<<"\nDisplay derived";
 }

 void fun()
 {
  cout<<endl<<"Display fun(), which is the member of only Derived class";
 }
};

void main()
{
 clrscr();
 Base B,*bptr;
 Derived D,*dptr;
 cout<<"\nbptr points to base";
 bptr=&B;
 bptr->display();
 cout<<"\ndptr points to derived";
 dptr=&D;
 dptr->fun();
 getch();
}
/*OUTPUT
bptr points to base
Display Base
dptr points to derived
Display fun(), which is the member of only Derived class
*/

