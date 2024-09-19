#include<iostream>
using namespace std;

int main()
{
	int i,j;
	bool a[4][4]={ {true, false, true, true},
				   {false, true, false, true},
				   {true, false, false, false},
				   {true, true, false, true}
				 };	
				 				
	cout<<"Boolean array is:"<<endl;			 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int count=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i>=j && a[i][j]==true)
				count=count+1;
		}
	}
	
	cout<<"No. of pairs of Friends= "<<count;
}
