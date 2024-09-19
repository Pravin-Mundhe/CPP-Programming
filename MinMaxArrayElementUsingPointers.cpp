#include<iostream>
using namespace std;

void MinMax(int a[], int size)
{
	int min=*(a+0),max=*(a+0),i;
	for(i=1;i<size;i++)
	{
		if(*(a+i)<=min)
			min=*(a+i);
		if(*(a+i)>=max)
			max=*(a+i);
	}		
	cout<<"Minimum Array Element is: "<<min<<endl;
	cout<<"Maximum Array Element is: "<<max<<endl;
}

int main()
{
	int a[20],size,i;
	cout<<"Enter the array size: ";
	cin>>size;
	cout<<"Enter array elements:";
	for(i=0;i<size;i++)
		cin>>a[i];
	MinMax(a,size);
	return 0;
}
