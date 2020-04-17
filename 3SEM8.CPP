//CPP Program for find the sum of first n natural numbers;

#include<conio.h>
#include<iostream.h>

void main()
{
 clrscr();
 int i,n,sum=0;
 cout<<"Enter the value of n for find the sum of first n natural numbers"<<endl;
 cin>>n;
 for(i=1;i<=n;i++)
  sum=sum+i;
 cout<<endl<<"The sum of first "<<n<<" natural numbers is: "<<sum;
 getch();
}

/*OUTPUT
Enter the value of n for find the sum of first n natural numbers
7

The sum of first 7 natural numbers is: 28
*/