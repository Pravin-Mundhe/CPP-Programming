#include<iostream>
using namespace std;

void Print(int N)
{
	if(N<1)
		return;
	Print(N-1);	
	cout<<N<<" ";
}

int main()
{
	int N;	
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	Print(N); 
	return 0;
}
