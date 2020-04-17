//CPP Program to read data from a file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main()
{
 clrscr();
 ifstream fin;
 char ch;
 fin.open("f1.txt");
 fin>>ch;
 while(!fin.eof())
 {
  cout<<ch;
  fin>>ch;
 }
 fin.close();
 getch();
}