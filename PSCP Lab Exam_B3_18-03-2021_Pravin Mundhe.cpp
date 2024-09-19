#include <iostream>
#include<string>
using namespace std;
bool check(int A[],int n,int s)
{
 for(int i=0;i<n;i++)
 {
 if(A[i]>=s) return false;
 s+=A[i];
 }
 return true;
}
int main()
{
 int n,i,j,s,temp=0;
 cout<<"Enter number of opponents:";
 cin>>n;
 int A[n];
 cout<<"\nEnter strengths of oppponents:";
 for( i=0;i<n;i++)
 cin>>A[i];
 cout<<"\nEnter shubham's initial strength S:";
 cin>>s;
 
 for(i=0;i<n-1;i++)
 {
 	for (j=0;j<n -i-1; j++)
 	{
 		if (A[j]>A[j+1])
 		{
 			temp=A[j];
 			A[j]=A[j+1];
 			A[j+1]=temp;
		}
	}
 }
  
 if(check(A,n,s))
 cout<<"\nShubham can go to next level";
 else cout<<"\nShubham can not go to next level";
}
