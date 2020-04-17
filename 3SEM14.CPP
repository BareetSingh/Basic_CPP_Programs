//CPP Program for find largest element in an array;
#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int a[50],i,size,largest;
 cout<<"Enter the number of elements"<<endl;
 cin>>size;
 cout<<endl<<"Now Enter "<<size<<" "<<"elements"<<endl;
 for(i=0;i<size;i++)
  cin>>a[i];

 largest=a[0];
 for(i=0;i<size;i++)
  if(a[i]>largest)
   largest=a[i];
 cout<<"The largest number is: "<<largest;
 getch();
}

/*OUTPUT
Enter the number of elements
7

Now Enter 7 elements
11
21
1
43
666
789
543
The largest number is: 789
*/
