#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	if(b==0) 
		return a; 
	GCD(b, a%b);
	
}

int main()
{
	int a,b;	
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is: "<<GCD(a,b);
	return 0;
}

/*int GCD(int a, int b)
{
	if(a==0) return b; // Everything divides 0 
	if(b==0) return a;
	if(a==b) return a;//base condition
	if(a>b) 
		GCD(a-b,a);
	else
		GCD(a,b-a);
}*/
