#include<iostream>
using namespace std;

class sample
{
	private:
		int radius;
	protected:
		int id;
	public:
		string geekname;		
		double area(int r)
		{
			radius=r;
			return 3.14*radius*radius;
			//return 3.14*r*r;
		}
		void print();
};

void sample::print()
{
	cout<<geekname;
}

class sam:public sample
{
	public:
		void set(int i)
		{
			id=i;
		}
		void get()
		{
			cout<<id<<"\n";
		}
};

int main()
{
	sample obj;
	int r=5;		
	cout<<"Area of circle is "<<obj.area(r)<<"\n";
	sam obj1;
	obj1.set(r);
	obj1.get();
	obj.geekname="pravin";
	obj.print();
	return 0;
}
