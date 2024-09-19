#include<iostream>
using namespace std;

int Power(int a, int b)
{
	if(b==0) //base condition
		return 1;
	else 
		return a*Power(a,b-1);
}

int main()
{
	int a,b;	
	cout<<"enter the two numbers:";
	cin>>a>>b;
	int pow=Power(a,b);
	cout<<a<<" to the power "<<b<<" is: "<<pow;
	
	return 0;
}


