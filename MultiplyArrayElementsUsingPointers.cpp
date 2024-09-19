#include<iostream>
using namespace std;

void multiply(int a[], int size)
{
	int mul=1,i;
	for(i=0;i<size;i++)
		mul=mul*(*(a+i));
	cout<<"Multiplication is: "<<mul<<endl;
}

int main()
{
	int a[20],size,i;
	cout<<"Enter the array size: ";
	cin>>size;
	cout<<"Enter array elements:";
	for(i=0;i<size;i++)
		cin>>a[i];
	multiply(a,size);
	return 0;
}
