//CPP Program for illustrating Destructor;
#include<iostream.h>
#include<conio.h>
int count=0;
class text
{
 public:
 text()
 {
  count++;
  cout<<"\nCustructor msg: Object number "<<count<<" created";
 }

 ~text()
 {
  cout<<"\n\nDetructor msg: Object number "<<count<<" destroyed";
  count--;
 }
};

void main()
{
 clrscr();
 cout<<"Inside the main Block";
 cout<<"\ncreating First Object T1";
 text t1;
 {
  cout<<"\nInside Block1";
  cout<<"\nCreating two more objects T2 and T3";
  text T2,T3;
  cout<<"\nLeaving Block1";
 }
 cout<<"\nBlock Inside the main Block";
 getch();
}

/*OUTPUT

Inside the main Block
creating First Object T1
Custructor msg: Object number 1 created
Inside Block1
Creating two more objects T2 and T3
Custructor msg: Object number 2 created
Custructor msg: Object number 3 created
Leaving Block1

Detructor msg: Object number 3 destroyed

Detructor msg: Object number 2 destroyed
Block Inside the main Block

Detructor msg: Object number 1 destroyed
*/
