//CPP Program for single Inheritance;
#include<iostream.h>
#include<conio.h>

class Parent
{
 public:
 int id_p;
};

class Child:public Parent
{
 public:
 int id_c;
};

void main()
{
 clrscr();
 Child obj1;
 obj1.id_c=7;
 obj1.id_p=9;

 cout<<"Child Id: "<<obj1.id_c;
 cout<<endl<<"Parent Id: "<<obj1.id_p;
 getch();
}
/*OUTPUT
Child Id: 7
Parent Id: 9
*/