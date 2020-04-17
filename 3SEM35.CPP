//CPP Program for Ambiguity Problem;
#include<iostream.h>
#include<conio.h>

class GrandP
{
 int a;
};

class P1:public GrandP
{
 int x;
};

class P2:public GrandP
{
 int y;
};

class Child:public P1,P2  //Two copies of GrandP will be inherited
{
 int m;
};

void main()
{
 clrscr();
 Child c;
 getch();
}
