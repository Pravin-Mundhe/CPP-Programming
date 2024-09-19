#include<iostream>
using namespace std;

class parent
{
	public:
		int pid;
		
		parent()
		{
			cout<<"this is parent class"<<"\n";
		}
		
		void display(int i)
		{
			
			cout<<i<<"\n";
		}
		~parent()
		{
			cout<<"parent destructor called  "<<"\n";
		}
};

class child:public parent
{
	public:
		int cid;
		child()
		{
			cout<<"this is child class"<<"\n";	
		}	
		~child()
		{
			cout<<"child destructor called  "<<"\n";
		}			
};

/*class child1:public parent,public child //Multiple inheritance
{
	public:
		child1()
		{
			cout<<"this is child1 class"<<"\n";
		}
		~child1()
		{
			cout<<"child1 destructor called  "<<"\n";
		}
};*/

class child1:public child //Multilevel inheritance
{
	public:
		child1()
		{
			cout<<"this is child1 class"<<"\n";
		}
		~child1()
		{
			cout<<"child1 destructor called  "<<"\n";
		}
};


int main()
{
	child cobj;
	cobj.pid=10;
	cobj.cid=20;
	cout<<cobj.pid<<"\n";
	cobj.display(20);
	
	child1 obj;
	return 0;
}
