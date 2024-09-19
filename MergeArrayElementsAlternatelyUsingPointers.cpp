#include<iostream>
using namespace std;

void Merge(int a[],int n1,int b[],int n2,int c[])
{
	int i=0,j=0,k=0;
	
	while(i<n1 && j<n2)
	{
		
		*(c+(k++))=*(a+(i++));
		*(c+(k++))=*(b+(j++));		
	}
	while(i<n1)
	{
		*(c+(k++))=*(a+(i++));		
	}
	while(j<n2)
	{
		*(c+(k++))=*(b+(j++));	
	}
	for(i=0;i<n1+n2;i++)
		cout<<*(c+i)<<" ";
}

int main()
{
	int n1,n2,a[20],b[20],i;	
	cout<<"Enter the size of the array 1:";
	cin>>n1;
	if(n1==0)
		{
			cout<<"Empty array";
			exit(0);
		}
	cout<<"Enter the first array elements:";
	for(i=0;i<n1;i++)
		cin>>a[i];
	
	cout<<"enter the size of the array 2:";
	cin>>n2;
	
	cout<<"Enter the second array elements:";
	for(i=0;i<n2;i++)
		cin>>b[i];
	
	int c[n1+n2];
	
	Merge(a,n1,b,n2,c);
	return 0;
}
