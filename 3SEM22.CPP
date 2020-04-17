//CPP Program illustrating object as an argument;
#include<iostream.h>
#include<conio.h>
class time
{
 int h,m;
 public:
 void settime(int a,int b)
 {
  h=a;
  m=b;
 }
 void showtime()
 {
  cout<<h<<"Hrs "<<m<<"Minutes";
 }

 void addtime(time t1,time t2)
 {
  h=(t1.h+t2.h+(t1.m+t2.m)/60);
  m=(t1.m+t2.m)%60;
 }
};

void main()
{
 time t1,t2,t3;
 clrscr();
 t1.settime(1,15);
 t2.settime(1,50);
 t3.addtime(t1,t2);
 t3.showtime();
 getch();
}
/* OUTPUT
3Hrs 5Minutes
*/
