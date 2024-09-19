#include<iostream>
using namespace std;
int DecimalToBinary(int N)
{
	//int a[32],i=0,size,n=N;
	if(N==0)
		return 0;
	
	DecimalToBinary(N/2);
	cout<<N%2;
}
int main()
{
	int N;
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	cout<<"Binary of "<<N<<" is: ";
	DecimalToBinary(N);	
	//cout<<"Binary of "<<N<<" is: "<<DecimalToBinary(N)<<endl;	
	return 0;
}
