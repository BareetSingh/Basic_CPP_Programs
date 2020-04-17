//CPP Program for call by reference
#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter any two numbers for swapping"<<endl;
 cin>>a>>b;
 cout<<"You have entered\na= "<<a<<endl<<"b= "<<b;
 swap(a,b);
 cout<<endl<<"After swapping the numbers are"<<endl;
 cout<<"a= "<<a<<endl<<"b= "<<b;
 getch();
}

void swap(int &x,int &y)
{
 x=x+y;
 y=x-y;
 x=x-y;
}

/* OUTPUT
Enter any two numbers for swapping
111
222
You have entered
a= 111
b= 222
After swapping the numbers are
a= 222
b= 111
*/
