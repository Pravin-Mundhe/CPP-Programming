#include<iostream>
using namespace std;

int Sum(int N)
{
	if(N==0)
		return 0;
	return (N%10) + Sum(N/10);
}

int main()
{
	int N,S=0;	
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	S=Sum(N); 
	cout<<"Sum of digits of "<<N<<" is: "<<S<<endl;
	return 0;
}
