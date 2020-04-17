//CPP Program for call by value;
#include<iostream.h>
#include<conio.h>
void swap(int,int);
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter any two numbers for swapping"<<endl;
 cin>>a>>b;
 cout<<"You have entered\na= "<<a<<endl<<"b= "<<b;
 swap(a,b);
 getch();
}

void swap(int x,int y)
{
 x=x+y;
 y=x-y;
 x=x-y;

 cout<<endl<<"After swapping the numbers are"<<endl;
 cout<<"a= "<<x<<endl<<"b= "<<y;
}

/* OUTPUT

Enter any two numbers for swapping
12
78
You have entered
a= 12
b= 78
After swapping the numbers are
a= 78
b= 12
*/
