#include<iostream>
using namespace std;

int Sum(int N)
{
	if(N==0)
		return 0;
	return N+Sum(N-1);	
}

int main()
{
	int N,S=0;	
	cout<<"Enter the number:";
	cin>>N;
	cout<<"Input number is: "<<N<<endl;
	S=Sum(N);
	cout<<"Sum of numbers from 1 to "<<N<<" is: "<<S<<endl;	
	return 0;
}
