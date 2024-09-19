#include<iostream>
using namespace std;

void Swap(int &c, int &d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
	cout<<"Values after swapping:"<<c<<" "<<d<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter two integer values:";
	cin>>a>>b;
	cout<<"Values before swapping:"<<a<<" "<<b<<endl;
	Swap(a,b);
	return 0;
}
