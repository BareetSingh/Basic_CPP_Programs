//CPP Program for inline functon
#include<iostream.h>
#include<conio.h>

class sample
{
 int a;

 public:
 void setdata(int x)
 {
  a=x;
 }
 inline void showdata();
};

void sample :: showdata()
{
  cout<<endl<<"a= "<<a;
}

void main()
{
 clrscr();
 sample s;
 int t;
 cout<<"Enter any data"<<endl;
 cin>>t;
 s.setdata(t);
 cout<<endl<<"You have entered";
 s.showdata();
 getch();
}
/* OUTPUT

Enter any data
123

You have entered
a= 123
*/
