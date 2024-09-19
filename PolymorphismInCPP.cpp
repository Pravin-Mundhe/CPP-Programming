// CPP program to illustrate 
// Operator Overloading,function overloading, function overriding 
#include<iostream> 
using namespace std; 




/*void fun(char *a)
{
	cout<<"non-const function called\n";
}
void fun(const char *a)
{
	cout<<a<<"const fun called\n";
}

int main()
{
	const char *ptr="geeks";
	fun(ptr);
	return 0;
}

/*class test
{
	protected:
		int x;
	public:
		test(int i):x(i){		}
		void fun() const
		{
			cout<<"fun() const called\n";
		}
		void fun()
		{
			cout<<"fun() called\n";
		}
};

int main()
{
	const test t1(10);
	test t2(20);
	t1.fun();
	t2.fun();
	
	return 0;
}

/*class test
{
	public:
	static void fun(float j=0){	cout<<"0\n";}
	void fun(int i){cout<<i;	}
};

int main()
{
	test t;
	//t.fun();
	t.fun(10);
	
	return 1;
}*/

class base
{
	public:
		virtual void print()
		{
			cout<<"print base claas"<<"\n";
		}
		void show()
		{
			cout<<"show base class"<<"\n";
		}
};
class derived: public base
{
	public:
		void print()
		{
			cout<<"print derived class"<<"\n";
		}
		void show()
		{
			cout<<"show derived class"<<"\n";
		}
};

int main()
{
	derived d;
	base &bptr=d; //base *bptr; bptr=&d;
	bptr.print();
	d.show();
	bptr.show();
}


/*class point
{
	int x,y;
	public:
	point(int i=0,int j=0)
	{
		x=i;
		y=j;
	}
	void print()
	{
		cout<<x<<" "<<y<<"\n";
	}
};

int main()
{
	point t(20,20);
	t.print();
	t=30;
	t.print();
	
	return 0;
}


/*class fraction
{
	int num,den;
	public:
		fraction(int n, int d)
		{
			num=n;
			den=d;
		}
		operator float() const
		{
			return float(num)/float(den);
		}
};

int main()
{
	fraction f(2,5);
	float val=f;
	cout<<val;
	return 0;
}

/*class A
{
	public:
		void fun(int x)
		{
			cout<<"X is "<<x<<"\n";
		}
		void fun(double x)
		{
			cout<<"X is "<<x<<"\n";
		}
		void fun(int x, double y)
		{
			cout<<"X is "<<x<<" and Y is "<<y<<"\n";
		}
};

int main()
{
	A obj;
	obj.fun(10);
	obj.fun(20.5);
	obj.fun(10,20.5);
	
	return 0;
}*/


