//CPP Program to check whether a char is Vowel or Consonent
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 cout<<"Enter any Character"<<endl;
 cin>>ch;
 if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
  cout<<"It is a Vowel"<<endl;
 else
  cout<<"It is a Consonent";
  getch();
}
/*OUTPUT
Enter any Character
W
It is a Consonent
*/