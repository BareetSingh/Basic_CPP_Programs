// CPP Program to display prime numbers between two intervals
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int n1,n2,i,j;
 cout<<"Enter the lower and minimum value for print prime numbers between them"<<endl;
 cin>>n1>>n2;
 cout<<endl;
 for(i=n1;i<=n2;i++)
 {
  for(j=2;j<i;j++)
   if(i%j==0)
    break;
  if(j==i)
   cout<<j<<" ";
 }
 getch();
}

/* OUTPUT
Enter the lower and minimum value for print prime numbers between them
2
66

2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61
*/