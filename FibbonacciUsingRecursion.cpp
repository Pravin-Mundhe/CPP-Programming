#include<iostream>
using namespace std;

int Fibonacci(int N)
{
	//if((N==0)||(N==1))
	if(N<=1)
		return N;		
	else
	{
		return (Fibonacci(N-1) + Fibonacci(N-2));
	}
}

int main()
{
	int N,i=0;	
	cout<<"Enter the Fibbonacci Number:";
	cin>>N;
	cout<<"Fibbonacci Number is:"<<N<<endl;
	
	while(i<N)
	{
		cout<<Fibonacci(N)<<" "; 
		i++;
	}	
	return 0;
}
