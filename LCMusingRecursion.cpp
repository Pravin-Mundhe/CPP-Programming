#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	if(b==0) 
		return a; 
	GCD(b, a%b);
	
}

int LCM(int a, int b)
{
	return (a*b)/GCD(b, a%b);
	
}
/*int LCM(int a, int b)
{
	static int temp=1;
	if(temp%a==0 && temp%b==0)//base condition
		return temp;
	temp++;
	LCM(a,b);
}*/

int main()
{
	int a,b;	
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"LCM of "<<a<<" and "<<b<<" is: "<<LCM(a,b);
	return 0;
}


