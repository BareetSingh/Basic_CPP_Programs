//CPP Program illustrating Abstract Class
#include<iostream.h>
#include<conio.h>
class student
{
 int roll_no;
 public:
 void getdata(int n)
 {
  int roll_no=n;
 }

 void putdata()
 {
  cout<<"Roll No="<<roll_no<<endl;
 }
 virtual void getmarks(float,float)=0;
 virtual void putmarks()=0;
};

class engineering: public student
{
 float sub1,sub2;
 public:
 void getmarks(float m,float n)
 {
  sub1=m;
  sub2=n;
 }
void putmarks()
 {
  cout<<"sub1="<<sub1<<endl;
  cout<<"sub2="<<sub2<<endl;
 }
};

class medical:public student
{
 float sub1,sub2;
 public:

 void getmarks(float m,float n)
 {
  sub1=m;
  sub2=n;
 }

 void putmarks()
 {
  cout<<"sub1="<<sub1<<endl;
  cout<<"sub2="<<sub2<<endl;
 }
};
void main()
{
 clrscr();
 student *p;
 engineering e;
 medical m;
 p=&e;
 e.getdata(102);
 p->putdata();
 p->getmarks(50.6,60.8);
 p->putmarks();
 p=&m;
 p->getmarks(90.4,89.7);
 p->putmarks();
 getch();
}
/*OUTPUT
Roll No=1
sub1=50.599998
sub2=60.799999
sub1=90.400002
sub2=89.699997
*/
