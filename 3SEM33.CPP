//CPP Program for Hierarchical Inheritance;
#include<iostream.h>
#include<conio.h>

class A
{
 public:
 int x,y;

 void getdata()
 {
  cout<<"Enter value of x and y\n";
  cin>>x>>y;
 }
};

class B:public A
{
 public:
 void product()
 {
  cout<<"Product"<<x*y<<endl<<endl;
 }
};

class C:public A
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
 B obj1;
 C obj2;
 obj1.getdata();
 obj1.product();
 obj2.getdata();
 obj2.sum();
 getch();
}
/*OUTPUT
Enter value of x and y
12
13
Product156

Enter value of x and y
12
76
Sum= 88
*/