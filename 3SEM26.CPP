//CPP Program to illustrating construstor overloading;
#include<iostream.h>
#include<conio.h>
class complex
{
 float x,y;
 public:

 complex()   //default constructor
 {}

 complex(float a)  //parameterised constructor
 {
  x=y=a;
 }

 complex(float real,float img)
 {
  x=real;
  y=img;
 }

 friend complex sum(complex,complex);
 friend void show(complex);
};

complex sum(complex c1,complex c2)
{
 complex c3;
 c3.x=c1.x+c2.x;
 c3.y=c1.y+c2.y;
 return c3;
}

void show(complex c)
{
 cout<<c.x<<" + i"<<c.y;
}

void main()
{
 clrscr();
 complex a(27,3.5);
 complex b(1.6);
 complex c;
 c=sum(a,b);
 show(a);
 cout<<endl;
 show(b);
 cout<<endl;
 show(c);
 getch();
}
/*OUTPUT
27 + i3.5
1.6 + i1.6
28.6 + i5.1
*/

