#include<iostream>
using namespace std;

void Print(int a[],int start, int last)
{
	if(start==last)//base condition
	{
		cout<<a[start];
		return;
	}
	cout<<a[start]<<" ";
	Print(a,start+1,last);
}

int main()
{
	int N, a[20];	
	cout<<"enter the size of the array:";
	cin>>N;
	if(N==0)
		{
			cout<<"Empty array";
			exit(0);
		}
	cout<<"Enter array Elements:";
	for(int i=0;i<N;i++)
		cin>>a[i];
	Print(a,0,N-1);
	return 0;
}
