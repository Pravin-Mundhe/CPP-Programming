#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class test
{
	private:
		~test()
		{
			cout<<"private destructor called\n";
		}
		friend void destruct(test* ptr)
		{
			cout<<"friend destructor called\n";
			delete ptr;
		}	
};
int main()
{
	test *ptr=new test;
	destruct(ptr);
	return 0;
}



/*class test
{
	private:
		~test()
		{			
		}
	public:
		void show()
		{
			cout<<"hello\n";
		}
};
int main()
{
	//test t;
	//test* t;
	//test *t=new test();
	test* t=(test *)malloc(sizeof(test));
	t->show();
	return 0;
}


/*class String
{
	char *s;
	int size;
	public:
		String(const char *str=NULL)// constructor
		{
			size=strlen(str);
			s=new char [size+1];
			strcpy(s,str);
		}
		~String()//destructor
		{
			delete[] s;
		}
		String(const String &oldstr)//copy constructor
		{
			size=oldstr.size;
			s=new char [size+1];
			strcpy(s,oldstr.s);
		}
		void print()
		{
			cout<<s<<"\n";
		}
		void change(const char *str)
		{
			delete [] s;
			size=strlen(str);
			s=new char[size+1];
			strcpy(s,str);
		}
	
};

int main()
{
	String str1("john");
	String str2=str1;
	
	str1.print();
	str2.print();
	
	str2.change("wick");
	
	str1.print();
	str2.print();
	
	
	return 0;
}

/*class point
{
	int x,y;
	public:
		point(int a,int b)
		{
			x=a;
			y=b;
		}
		point(const point &p1)
		{
			x=p1.x;
			y=p1.y;
		}
		void get()
		{
			cout<<"x="<<x<<" y="<<y<<"\n";
		}
		void show(int i)
		{
			cout<<i<<"\n";
		}
};

int main()
{
	point p1(10,20);
	point p2=p1;
	
	p1.get();
	p2.get();
	
	p1.show(30);
	p2.show(40);
	
	return 0;
}

/*class construct
{
	private :
		float c;
	public:
		int a,b;
		construct()
		{
			a=10;
			b=20;
			c=30.5;
			cout<<"private variable "<<c<<"\n";
		}	
		construct(float i)
		{
			c=i;
		}			
		void show()
		{
			cout<<"private variable using parameter "<<c<<"\n";
		}
};

int main()
{
	construct c;
	cout<<c.a<<" "<<c.b<<"\n";
		
	construct c1(4.5);
	c1.show();	
	
	return 0;
}


/*class geeks
{
	public:
		int id;
		
		geeks()
		{
			cout<<"default constructor called"<<"\n";
		}
		geeks(int i)
		{
			cout<<"parameterized constructor called"<<"\n";
			id=i;
		}
		~geeks()
		{
			cout<<"destructor called for id: "<<id<<"\n";
		}
};

int main()
{
	geeks obj;
	cout<<"id is: "<<obj.id<<"\n";
	geeks obj1(5);
	cout<<"id is: "<<obj1.id<<"\n";
	geeks obj2=obj1;
	cout<<"id is: "<<obj2.id<<"\n";	
	
	return 0;
}*/
