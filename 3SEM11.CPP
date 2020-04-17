// CPP Program to display armstrong number between two intervals;
#include<iostream.h>
#include<conio.h>
#include<math.h>
int size(int);
void main()
{
 clrscr();
 cout<<"Enter the lowest and upper value to display armstrong number between them"<<endl;
 int lower,upper,i,count,temp,remainder,sum;
 cin>>lower>>upper;

 for(i=lower;i<=upper;i++)
 {
  temp=i,sum=0;
  count=size(temp);
  while(temp!=0)
  {
   remainder=temp%10;
   sum=sum+pow(remainder,count);
   temp/=10;
  }
  if(sum==i)
   cout<<i<<" ";
 }
getch();
}

int size(int temp)
{
 int count=0;
 while(temp!=0)
 {
  temp/=10;
  count++;
 }
 return count;
}

/* OUTPUT
Enter the lowest and upper value to display armstrong number between them
1
10000
1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474
*/