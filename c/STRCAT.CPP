#include<iostream.h>
#include<conio.h>
#include<String.h>
class Test
{
	public:

	void str(char str1[10], char str2[10])
	{
		strcat(str1,str2);
	}
	void str()
	{
		cout<<;
	}
};
void main()
{
	Test obj;
	char name1[10],name2[10];
	clrscr();
	cout<<"enter name1";
	cin>>name1;
	cout<<"enter name2";
	cin>>name2;
	obj.str(name1,name2);
	obj.str();
	getch();
}
