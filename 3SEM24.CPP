//CPP Program for illustrating friend function which friend of two classes;
#include<iostream.h>
#include<conio.h>
class X;

class A
{
 int a;
 public:
 void setdata()
 {
  cin>>a;
 }
 friend int maximum(A,X);
};

class X
{
 int x;
 public:
 void setdata()
 {
  cin>>x;
 }
 friend int maximum(A,X);
};

int maximum(A m,X n)
{
 if(m.a>n.x)
  return m.a;
 else
  return n.x;
}
void main()
{
 clrscr();
 A a1;
 X x1;
 cout<<"Enter two elements respectively for comparing\n";
 a1.setdata();
 x1.setdata();
 cout<<endl<<maximum(a1,x1)<<" is large";
 getch();
}

/*OUTPUT
Enter two elements respectively for comparing
99
110

110 is large
*/