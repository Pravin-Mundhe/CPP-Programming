#include<iostream>
using namespace std;
int DecimalToBinary(int N)
{
	int a[32],i=0,size,n=N;
	if(N==0)
	{
		cout<<"Binary is: "<<N<<endl;
		exit(0);
	}
	while(N>0)
	{
		a[i]=N%2;
		N=N/2;
		i++;
	}
	size=i;
	cout<<"Binary of "<<n<<" is:";
	for(i=size-1;i>=0;i--)
		cout<<a[i];	
}
int main()
{
	int N;
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	DecimalToBinary(N);	
	return 0;
}
