//CPP Program illustrating pointer to an object
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
  cout<<"a= "<<a;
 }
};

void main()
{
 clrscr();
 sample s1,*ptr;
 ptr=&s1;
 cout<<"Enter any data: ";
 ptr->setdata();
 cout<<"\nYou have Entered";
 s1.showdata();
 getch();
}
/*OUTPUT
Enter any data: 11

You have Entereda= 11
*/
