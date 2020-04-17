#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int a,b;
 char ch;
 cout<<"Enter any two numbers for calculations"<<endl;
 cout<<"Enter first operand, operator and second operand respectively"<<endl;
 cin>>a>>ch>>b;
 switch(ch)
 {
  case '+':
  cout<<a+b;
  break;

  case '-':
  cout<<a-b;
  break;

  case '*':
  cout<<a*b;
  break;

  case '/':
  cout<<(float)a/b;
  break;

  default:
  cout<<endl<<"Please Enter valid Operator";
 }
getch();
}

/* OUTPUT
Enter any two numbers for calculations
Enter first operand, operator and second operand respectively
5/2
2.5
*/