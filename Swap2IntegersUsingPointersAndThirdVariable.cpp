#include<iostream>
using namespace std;

void Swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"Values after swapping:"<<*a<<" "<<*b<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter two integer values:";
	cin>>a>>b;
	cout<<"Values before swapping:"<<a<<" "<<b<<endl;
	Swap(&a,&b);
	return 0;
}
