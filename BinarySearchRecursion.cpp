#include<iostream>
using namespace std;

int BinarySearch(int a[],int l, int r, int key)
{
	if(l<=r)
	{
	
		int mid=(l+r)/2;
	
		if(key==a[mid])
			return mid;
		
		if(key<a[mid])
			return BinarySearch(a,l,mid-1,key);
		else
			return BinarySearch(a,mid+1,r,key);
	}
	return -1;	
}

int main()
{
	int n, key,find,a[20];	
	cout<<"enter the size of the array:";
	cin>>n;
	cout<<"Enter array Elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element to search in the array:"<<endl;
	cin>>key;
	
	cout<<"Array elements are:";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	cout<<endl;
	
	find=BinarySearch(a,0,n-1,key);
	if(find==-1)
		cout<<"element is not found";
	else
		cout<<"element is found at position:"<<find+1;
	return 0;
}
