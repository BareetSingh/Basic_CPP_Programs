#include<iostream.h>
#include<conio.h>
class Base
{
 public:
 void display()
 {
  cout<<"\nDisplay Base";
 }
 virtual void show()
 {
  cout<<"\nBase show";
 }
};

class Derived: public Base
{
 public:
 void display()
 {
  cout<<"\nDisplay derived";
 }

 void show()
 {
  cout<<"\nShow derived";
 }
};

void main()
{
 clrscr();
 Base B;
 Derived D;
 Base *bptr;
 cout<<"\nbptr points to base";
 bptr=&B;
 bptr->display();
 bptr->show();
 cout<<"\nbptr points to derived";
 bptr=&D;
 bptr->display();
 bptr->show();
 getch();
}
/*OUTPUT
bptr points to base
Display Base
Base show
bptr points to derived
Display Base
Show derived
*/

