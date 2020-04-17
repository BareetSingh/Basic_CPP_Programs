// CPP Program to add two numbers through Class and Object
#include<iostream.h>
#include<conio.h>

class sample
{
 int a;
 public:
 void getdata()
 {
  cin>>a;
 }

 void putdata()
 {
  cout<<a;
 }

 void adddata(sample t1,sample t2)
 {
  a=t1.a+t2.a;
 }
};

void main()
{
 clrscr();
 sample a1,a2,a3;
 a1.getdata();
 a2.getdata();
 a3.adddata(a1,a2);
 a3.putdata();
 getch();
}

/*OUTPUT
5
7
12
*/
