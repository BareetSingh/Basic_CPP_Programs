//CPP Program to illustrating construstor;
#include<iostream.h>
#include<conio.h>
class sample
{
 int a;
 public:
 sample()   //default constructor
 {
  a=11;
 }
 void showdata()
 {
  cout<<"a="<<a;
 }
};

void main()
{
 clrscr();
 sample s1;
 s1.showdata();
 getch();
}
/*OUTPUT
a=11
*/
