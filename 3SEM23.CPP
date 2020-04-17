//CPP Program to illustrating Friend function;
#include<iostream.h>
#include<conio.h>
class complex
{
 int real,imag;
 public:
 void setdata()
 {
  cout<<"\nEnter the value of real part and imaginary part respectively: \n";
  cin>>real>>imag;
 }

 void showdata()
 {
 cout<<real<<" + i("<<imag<<")";
 }
 friend complex addition(complex,complex);
};

complex addition(complex m,complex n)
{
 complex temp;
 temp.real=m.real+n.real;
 temp.imag=m.imag+n.imag;
 return temp;
}

void main()
{
 clrscr();
 complex c1,c2,c3;
 cout<<"Enter 1st complex number: ";
 c1.setdata();
 cout<<"Enter 2nd complex number: ";
 c2.setdata();
 cout<<"You have Entered\n";
 c1.showdata();
 cout<<endl;
 c2.showdata();

 cout<<"\nAddition is: ";
 c3=addition(c1,c2);
 c3.showdata();
 getch();
}

/*OUTPUT

Enter 1st complex number:
Enter the value of real part and imaginary part respectively:
10
-12
Enter 2nd complex number:
Enter the value of real part and imaginary part respectively:
100
10
You have Entered
10 + i(-12)
100 + i(10)
Addition is: 110 + i(-2)
*/
