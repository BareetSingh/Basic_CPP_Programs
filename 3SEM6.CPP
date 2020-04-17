//CPP Program to find large number among three numbers using conditional operator;
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,L;
 cout<<"Enter any three numbers"<<endl;
 cin>>a>>b>>c;
 if(a>b)
  if(a>c)
   L=a;
  else
   L=c;
 else
  if(b>c)
   L=b;
  else
   L=c;
 cout<<endl<<"The Largest number is: "<<L;
 getch();
}

/* OUTPUT
Enter any three numbers
1112
1110
9999

The Largest number is: 9999
*/
