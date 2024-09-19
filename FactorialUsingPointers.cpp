#include<iostream>
using namespace std;

void Fact(int *c)
{
	int fact=1;
	while(*c!=0)
	{
		fact=fact*(*c);
		*c=*c-1;
	}
	cout<<"Factorial is :"<<fact<<endl;
}

int main()
{
	int a;
	cout<<"Enter the integer value:";
	cin>>a;	
	Fact(&a);
	return 0;
}
