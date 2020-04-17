//CPP Program to write data in a file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main()
{
 ofstream fout;
 fout.open("f1.txt");
 getch();d
 fout<<"Hello";
 getch();
 fout.close();
 getch();
}