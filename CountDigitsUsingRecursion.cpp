#include<iostream>
using namespace std;

int Count(int N)
{
	if(N==0)
		return 0;
	return 1 + Count(N/10);
}

int main()
{
	int N,S=0;	
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	S=Count(N); 
	cout<<"Number of digits in "<<N<<" are: "<<S<<endl;
	return 0;
}
