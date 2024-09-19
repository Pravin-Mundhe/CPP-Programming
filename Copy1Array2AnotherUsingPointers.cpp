#include<iostream>
using namespace std;

void Copy(int a[], int size)
{
	int b[20],i,j;
	for(i=0,j=size-1;j>=0;j--,i++)
	{
		*(b+i)=*(a+j);
	}
		
	cout<<"Copied array is: ";
	for(i=0;i<size;i++)
		cout<<*(b+i)<<" ";
}

int main()
{
	int a[20],size,i;
	cout<<"Enter the array size: ";
	cin>>size;
	cout<<"Enter array elements:";
	for(i=0;i<size;i++)
		cin>>a[i];
	Copy(a,size);
	return 0;
}
