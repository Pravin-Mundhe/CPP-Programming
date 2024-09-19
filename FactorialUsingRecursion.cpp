#include<iostream>
using namespace std;

int Factorial(int N)
{
	if(N==1)
		return 1;
	return N*Factorial(N-1);
}

int main()
{
	int N,S=0;	
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;	 
	cout<<"Factorial of "<<N<<" is: "<<Factorial(N)<<endl;
	return 0;
}
