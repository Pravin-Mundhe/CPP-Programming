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
		
	int mul=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul=mul+a[i][i];
		}		
	}
	cout<<"Multiplication of digonal elements of Array A is: "<<mul<<endl;
	
	int flag=0;
	for(i=1;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i][j]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;				
	}
	if(flag==1)
		cout<<"Matrix A is not upper triangular"<<endl;
	else
		cout<<"Matrix A is upper triangular"<<endl;
	
	
	return 0;
}
