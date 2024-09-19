#include<iostream>
#include<math.h>
using namespace std;

int det(int a[3][3], int n)
{
	int d=0, sub[3][3],i,j,x,subi,subj;
	
	if(n==2)
		return ((a[0][0]*a[1][1]) - (a[0][1]*a[1][0]));
	else
	{
		for(x=0;x<n;x++)
		{
			subi=0;
			for(i=1;i<n;i++)
			{
				subj=0;
				for(j=0;j<n;j++)
				{
					if(j==x)
						continue;
					sub[i][j]=a[i][j];
					subj++;
				}
				subi++;
			}
			d=d+(pow(-1,x) * a[0][x]* det(sub,n-1));
		}
	}
	return d;
}

int main()
{
	int i,j,d;	
	
	int a[3][3]={{3,0,-2},
				 {2,0,-2},
				 {0,1,1}};
	cout<<"Elements of array A are:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	d=det(a,3);
	cout<<"Determinanat of array A is: "<<d<<endl;
	
	return 0;
}
