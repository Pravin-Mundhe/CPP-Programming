#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;	
}

void rowwiseswap(int d[][4], int n)
{
	int i,j,k=0;
	cout<<"Original Array is:"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i=i+2)
	{
		k=i+1;
		for(j=0;j<n;j++)
		{
			swap(d[i][j],d[k][j]);
		}	
			
	}
	cout<<"After row-wise swap:"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}	
}

void columnwiseswap(int d[][4], int n)
{
	int i,j,k=0;
	cout<<"Original Array is:"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i=i+2)
	{
		k=i+1;
		for(j=0;j<n;j++)
		{			
			swap(d[j][i],d[j][k]);
		}				
	}
	cout<<"After column-wise swap:"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

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
	
	int b[3][3]={{3,2,1},
				 {6,5,4},
				 {9,8,7}};
	cout<<"Elements of array B are:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int c[3][3],k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
		}					
	}
	
	cout<<"Multiplication of A*B is:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int t[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[i][j]=a[j][i];
		}		
	}
	cout<<"Transpose of A is:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
				a[i][j]=0;
		}		
	}
	cout<<"Array A after converting to Lower triangular form:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
				b[i][j]=0;
		}		
	}	
	cout<<"Array B after converting to Upper triangular form:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	int n=4;
	int d[4][4]={{1,2,3,4},
				 {5,6,7,8},
				 {9,10,11,12},
				 {13,14,15,16}};
				 
	int e[4][4];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			e[i][j]=d[i][j];
		}		
	}
	rowwiseswap(d,n);
	columnwiseswap(e,n);	
	
	return 0;
}
