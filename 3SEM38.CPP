//CPP Program to illustrating This Pointer
#include<iostream.h>
#include<conio.h>

class Box
{
 int l,b,h;
 public:
 void setdimensions(int l,int b,int h)
 {
  this->l=l;
  this->b=b;
  this->h=h;
 }
 void showdimensions()
 {
  cout<<"L="<<l;
  cout<<endl<<"B="<<b;
  cout<<endl<<"H="<<h;
 }
};

void main()
{
 clrscr();
 Box b1;
 b1.setdimensions(112,101,20);
 b1.showdimensions();
 getch();
}
/*OUTPUT
L=112
B=101
H=20
*/


