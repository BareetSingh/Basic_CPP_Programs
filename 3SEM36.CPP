//Virtual Base class(Solving Ambiguity Problem);
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

class P2:virtual public GrandP
{
 int y;
};

class Child:public virtual P1,P2  //Only one copy of GrandP will be inherited
{
 int m;
};

void main()
{
 clrscr();
 Child c;
 getch();
}
