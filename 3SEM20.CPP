// CPP Program to illustrate static member function;
#include<iostream.h>
#include<conio.h>
class sample
{
 int a;
 static int count;

 public:
 void setdata()
 {
  a=++count;
 }

 void showdata()
 {
  cout<<"a= "<<a<<endl;
 }

 static void showcount()
 {
  cout<<"count "<<count<<endl;
 }
};

int sample :: count;
void main()
{
 clrscr();
 sample s1,s2;
 s1.showcount();
 s2.showcount();
 s1.setdata();
 s2.setdata();
 s1.showdata();
 s2.showdata();
 sample :: showcount();
 s1.showcount();
 s2.showcount();
 getch();
}
/* OUTPUT
count 0
count 0
a= 1
a= 2
count 2
count 2
count 2
*/
