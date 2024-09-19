#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void print(int n, int a[][10])
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
}
int main()
{
	int i,j,n,c,m,p,a[10][10];
	string shape;
	cout<<"\n eneter size of array:";	
	cin>>n;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=1;
		}
	}
	
	cout<<"\n enter the shape:";	
	cin>>shape;
	cout<<"\n enter the value of m:";
	cin>>m;
	p=m;
	cout<<"\n enter the number to fill the shape:";	
	cin>>c;	
	
	if(shape=="square")
	{
		for(i=(n/2)-m;i<=(n/2)+m;i++)
		{
			for(j=(n/2)-m;j<=(n/2)+m;j++)
			{
				a[i][j]=c;
			}
		}
		print(n,a);
	}
	else if (shape=="diamond")
	{
		for(i=(n/2)-p;i<=(n/2);i++)
		{
			for(j=(n/2)-(p-m);j<=(n/2)+(p-m);j++)
			{
				a[i][j]=c;
			}
			m--;
		}
		m=0;
		for(i=(n/2);i<=(n/2)+p;i++)
		{
			for(j=(n/2)+(p-m);j>=(n/2)-(p-m);j--)
			{
				a[i][j]=c;
			}
			m++;
		}
		print(n,a);
	}
	else if(shape=="triangle")
	{
		for(i=(n/2)-p;i<=(n/2)+p;i++)
		{
			for(j=(n/2)-(p-m);j<=(n/2)+(p-m);j++)
			{
				a[i][j]=c;
			}
			m--;
		}
		print(n,a);	
	}
	else
		cout<<"Invalid input";	
	
	return 0;
}

