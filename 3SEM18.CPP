//CPP Program for function overloading;
#include<iostream.h>
#include<conio.h>
int volume(int); //Cube
double volume(double,int);     //  Cylinder
int volume(int,int,int);      //   Cuboid

void main()
{
 clrscr();
 cout<<"The Volume of Cube is: "<<volume(5)<<endl;
 cout<<"The Volume of Cylinder is: "<<volume(2.4,5)<<endl;
 cout<<"The Volume of Cuboid: "<<volume(2,4,5)<<endl;
 getch();
}
int volume(int a)
{
 return (a*a*a);
}

double volume(double a,int b)
{
 return(3.14*a*a*b);
}

int volume(int a,int b,int c)
{
 return(a*b*c);
}
/* OUTPUT
The Volume of Cube is: 125
The Volume of Cylinder is: 90.432
The Volume of Cuboid: 40
*/
