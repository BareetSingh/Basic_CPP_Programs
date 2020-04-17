//CPP Program to illustrate static datamember
#include<iostream.h>
#include<conio.h>

class sample
{
 int a;
 static int count;

 public:
 void setdata()
 {
  a=++count;
 }

 void showdata()
 {
  cout<<"a= "<<a<<endl;
 }

 void showcount()
 {
  cout<<"count= "<<count<<endl;
 }
};

int sample :: count=90;

void main()
{
 clrscr();
 sample s1,s2,s3;
 s1.setdata();
 s2.setdata();
 s3.setdata();
 s1.showdata();
 s2.showdata();
 s3.showdata();
 s1.showcount();
 s2.showcount();
 s3.showcount();
 getch();
}

/*OUTPUT

a= 91
a= 92
a= 93
count= 93
count= 93
count= 93
*/