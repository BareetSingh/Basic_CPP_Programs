//CPP Program for illustrating operator overloading for binary operator;
#include<iostream.h>
#include<conio.h>

class sample
{
 int a;
 public:

 void setdata()
 {
  cin>>a;
 }

 void showdata()
 {
  cout<<a;
 }

 sample operator +(sample s)
 {
  sample temp;
  temp.a=a+s.a;
  return temp;
 }
};

void main()
{
 clrscr();
 sample s1,s2,s3;
 cout<<"Enter any two numbers for addition\n";
 s1.setdata();
 s2.setdata();
 s3=s1+s2;
 cout<<"\nThe addition is: ";
 s3.showdata();
 getch();
}

/*OUTPUT
Enter any two numbers for addition
11
12

The addition is: 23
*/