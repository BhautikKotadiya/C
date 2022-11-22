#include<iostream.h>
#include<conio.h>
class a
{
  int a,r,h;
  public:
  void cube()
  {
	cout<<"Enter your A value :";
	cin>>a;
	cout<<"Your cube value is :"<<a*a*a;
  }
  void cylinder()
  {
	cout<<"Enter your R value :";
	cin>>r;
	cout<<"Enter your H value :"<<endl;
	cin>>h;
	cout<<"your cylinder value is :"<<3.14*r*2*h;
  }
};
void main()
{
	clrscr();

	getch();
}
