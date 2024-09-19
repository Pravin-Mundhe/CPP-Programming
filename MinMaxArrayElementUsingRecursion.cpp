#include<iostream>
using namespace std;

int Maximum(int a[],int start, int last)
{
	if(start==last)	//base condition
		return a[start];
	
	if(start<last)	
	{
		if(a[start]<a[last])
			Maximum(a,start+1,last);
		else
			Maximum(a,start,last-1);		
	}	
}
int Minimum(int a[],int start, int last)
{
	if(start==last)	//base condition
		return a[start];
	
	if(start<last)	
	{
		if(a[start]>a[last])
			Minimum(a,start+1,last);
		else
			Minimum(a,start,last-1);		
	}	
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
	cout<<"Maximum Array element is:"<<Maximum(a,0,N-1)<<endl; 
	cout<<"Minimum Array element is:"<<Minimum(a,0,N-1); 
	return 0;
}
