#include<iostream>
using namespace std;

void EvenNumbers(int N)
{
	if(N==0)
		return ;
	if(N%2==0)
	{
		EvenNumbers(N-2);
		cout<<N<<" ";
	}
	else
		EvenNumbers(N-1);	
}
void OddNumbers(int N)
{
	if(N<=0)
		return ;
	if(N%2==0)
	{
		OddNumbers(N-1);		
	}
	else
	{
		OddNumbers(N-2);		
		cout<<N<<" ";
	}
}
int main()
{
	int N,S=0;	
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	cout<<"Even numbers from 1 to "<<N<<" are: ";
	EvenNumbers(N); 
	cout<<endl<<"Odd numbers from 1 to "<<N<<" are: ";
	OddNumbers(N); 
	return 0;
}
