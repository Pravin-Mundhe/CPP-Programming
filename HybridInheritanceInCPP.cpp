#include<iostream>
using namespace std;

/*class CA
{
	public:
		int a;
};
class CB:public CA
{
	public:
		int b;
};
class CC:public CA
{
	public:
		int c;
};
class CD:public CB, public CC
{
	public:
		int d;
};

int main()
{
	CD obj;
	
	//obj.a=10;
	//obj.a=20;
	
	obj.CB::a=10;
	obj.CC::a=20;	
	
	cout<<"a from class B:"<<obj.CB::a<<"\n";
	cout<<"a from class C:"<<obj.CC::a<<"\n";	
	
	return 0;
}*/
class CA
{
	public:
		int a;
};
class CB:virtual public CA
{
	public:
		int b;
};
class CC:virtual public CA
{
	public:
		int c;
};
class CD:public CB, public CC
{
	public:
		int d;
};

int main()
{
	CD obj;
	
	obj.a=10;
	obj.a=20; //this will over write 10
	
	obj.b=30;
	obj.c=40;
	obj.d=50;
	cout<<obj.a<<"\n";
	cout<<obj.b<<"\n";
	cout<<obj.c<<"\n";
	cout<<obj.d<<"\n";
	return 0;
}




