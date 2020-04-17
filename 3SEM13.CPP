//CPP Program for reverse a sentence;
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void display(int,int,char[]);

void main()
{
 clrscr();
 char a[40];
 cout<<"Enter any Setence\n";
 gets(a);
 int length=strlen(a);

 int sti,endi;
 sti=length-1;
 endi=length-1;
 for(int i=length-1;i>=0;i--)
  if(a[i]==32 || i==0)
   {
    if(i==0)
     sti=i;
    else
     sti=i+1;
    display(sti,endi,a);
    endi=i-1;
   }
  getch();
}

void display(int sti,int endi,char str[])
{
 for(int i=sti;i<=endi;i++)
  cout<<str[i];
  cout<<" ";
}

/*OUTPUT

Enter any Setence
India is great
great is India
*/
