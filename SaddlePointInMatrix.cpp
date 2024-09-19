#include<iostream>
using namespace std;

int main()
{
	int i,j;	
	
	int a[3][3]={{3,2,1},
				 {6,5,4},
				 {9,8,7}};
	cout<<"Elements of array A are:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	int count=0, row, col,k;
	for(i=0;i<3;i++)
	{
		row=a[i][0];
		col=0;
		for(j=1;j<3;j++)
		{
			if(row>a[i][j])
			{
				row=a[i][j];
				col=j;
			}
		}
		for(k=0;k<3;k++)			
		{
			if(row<a[k][col])
				break;
		}
		if(k==3)
		{
			count=count+1;
			cout<<"Saddle point is: "<<row<<" fount at a["<<i<<"]["<<col<<"]"<<endl;
		}
	}
	
	cout<<"No. of Saddle points are: "<<count<<endl;
	return 0;
}
