#include<iostream>
using namespace std;

int main()
{
	int i,j;	
	
	int a[3][3]={{1,2,3},
				 {4,5,6},
				 {7,8,9}};
	cout<<"Elements of array A are:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}		
	}
	cout<<"Sum of elements of Array A is: "<<sum<<endl;
		
	return 0;
}
