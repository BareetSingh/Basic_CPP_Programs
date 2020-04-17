//CPP Program to find largest number among three numbers using turnary operator;
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,L;
 cout<<"Enter any three numbers"<<endl;
 cin>>a>>b>>c;
 L=a>b?(a>c?a:c):(b>c?b:c);
 cout<<endl<<"The Largest number is: "<<L;
 getch();
}
/*OUTPUT
Enter any three numbers
100
10
500

The Largest number is: 500
*/
