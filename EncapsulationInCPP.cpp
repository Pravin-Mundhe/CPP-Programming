#include<iostream>
using namespace std;

class base
{
	private:
		int x;
	public:
		void set(int i)
		{
			x=i;
		}
		int get()
		{
			return x;
		}
		/*void get()
		{
			cout<<x;
		}*/

};

int main()
{
	base b;
	b.set(10);
	cout<<b.get();
	//b.get();
}
