//CPP Program for print Fibonacci Series using Recursion;

#include<iostream.h>
#include<conio.h>
long int fibo(int n);
void main()
{
 int num,i;
 clrscr();
 cout<<"Enter nth term for finding FIBONACCI Series till nth term\n";
 cin>>num;
 for(i=1;i<=num;i++)
  cout<<fibo(i)<<"\t";
getche();
}

long int fibo(int n)
{
 if(n==1)
  return 0;
 if(n==2)
  return 1;
 else
  return(fibo(n-1)+fibo(n-2));
}

/* OUTPUT
Enter nth term for finding FIBONACCI Series till nth term
30
0       1       1       2       3       5       8       13      21      34
55      89      144     233     377     610     987     1597    2584    4181
6765    10946   17711   28657   46368   75025   121393  196418  317811  514229
*/