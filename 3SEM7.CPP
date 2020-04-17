//quadretic equation
#include<conio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void roots();
int a,b,c,D;
void main()
{
 clrscr();
 cout<<"Enter a quadratic equation(a*x*x + bx + c=0) to find its roots"<<endl;
 cout<<"Enter the value of a,b and c respectively"<<endl;
 cin>>a>>b>>c;
 D=b*b-4*a*c;
 if(D==0)
 {
  cout<<endl<<"The equation has only one root";
  cout<<endl<<"Root is: ";
  roots();
 }
 else if(D>0)
 {
  cout<<endl<<"The equation has two real roots";
  cout<<endl<<"Roots are: ";
  roots();
 }
 else
  cout<<endl<<"The equation has imaginary roots";
getch();
}

void roots()
{
 int x1,x2;
 x1=(-b+sqrt(D))/(2*a);
 x2=(-b-sqrt(D))/(2*a);
 if(x1==x2)
  cout<<x1;
 else
  cout<<"x= "<<x1<<","<<x2;
 getch();
}
/*
Enter a quadratic equation(a*x*x + bx + c=0) to find its roots
Enter the value of a,b and c respectively
2
-12
17

The equation has two real roots
Roots are: x= 3,2
*/