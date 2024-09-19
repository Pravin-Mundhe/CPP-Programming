#include<iostream>
using namespace std;
int Hailstone(int N)
{
	static int i;
	cout<<" "<<N<<endl;
	if(N==1 && i==0)
	{
		return i;
	}
	else if (N==1 && i!=0)
	{
		i++;
		return i;
	}
	else if (N%2==0)
	{
		i++;
		Hailstone(N/2);
	}
	else if (N%2!=0)
	{
		i++;
		Hailstone(3*N+1);
	}
}
int main()
{
	int N, count=0;
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	count=Hailstone(N);
	cout<<"Required number of steps are: "<<count<<endl;
	return 0;
}
