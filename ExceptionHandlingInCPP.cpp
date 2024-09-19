#include<iostream>
using namespace std;

void f1() throw (int)
{
	cout<<"fun1() start\n";
	throw 100;
	cout<<"fun1() end\n";
}

void f2() throw (int)
{
	cout<<"fun2() start\n";
	f1();
	cout<<"fun2() end\n";
}

void f3()
{
	cout<<"fun3() start\n";
	try
	{
		f2();
	}
	catch(int i)
	{
		cout<<"caught exception "<<i<<"\n";
	}
	cout<<"fun3() end\n";
}

int main()
{	
	f3();
	return 0;
}

/*class test
{
	public:
	test(){cout<<"constructor called\n";	}
	~test(){cout<<"destructor called\n";	}	
};

int main()
{	
	try
	{
		test t1;
		throw 10;
	}
	catch(int n)
	{
		cout<<n<<" in catch block\n";
	}
	return 0;
}

/*int main()
{	
	try
	{
		try
		{
			throw 10;
		}
		catch(int n)
		{
			cout<<n<<" handled partially\n";
			throw ;
			//throw 20;
		}
	}
	catch(int n)
	{
		cout<<n<<" handled completely\n";
	}
	return 0;
}

/*
//void fun(int *ptr, int x) throw (int*,int)
void fun(int *ptr, int x)
{
	if(ptr==NULL)
	{
		throw ptr;
	}
	if(x==0)
	{
		throw x;
	}
}
int main()
{	
	try
	{
		fun(NULL,0);
	}
	catch(...)
	{
		cout<<"caught exception from fun()";
	}
	return 0;
}

/*int main()
{
	int x=10;
	try
	{
		throw x;
	}
	catch(char x)
	{
		cout<<"caught\n";
	}
	
	return 0;
}

/*int main()
{	
	try
	{
		//throw 10;
		throw 'a';
	}
	catch(char* x)
	{
		cout<<"caught"<<x<<"\n";
	}
	catch(int x)
	{
		cout<<"exception caught "<<x<<"\n";
	}
	catch(char x)
	{
		cout<<"exception caught "<<x<<"\n";
	}
	catch(...)
	{
		cout<<"default catch block executed\n";
	}	
	
	return 0;
}


/*int main()
{
	int x=-1;
	cout<<"before try executes\n";
	try
	{
		cout<<"inside try block\n";
		if(x<0)
		{
			throw x;
			cout<<"this will not execute";
		}
		cout<<"this will also not get execute";
	}
	catch(int x)
	{
		cout<<"an exception has occurred\n";
	}
	
	cout<<"after catch block\n";
	
	return 0;
}*/
