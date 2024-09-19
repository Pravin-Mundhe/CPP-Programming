#include<iostream>
using namespace std;
int Prime(int N, int i)
{
	if(i==1) //Base condition for prime
		return 1;
	if(N%i==0) //Base condition for not prime
		return -1;
	else
		Prime(N,i-1);		
}

int main()
{
	int N;
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	int flag=Prime(N,N/2);
	if(flag==-1)
		cout<<"Number is not prime (Composite)";
	else
		cout<<"Number is prime";
	return 0;
}
