#include <iostream>
using namespace std;
int main()
{
 int a[10][10],n,i,j,k[10],l=0,square1,square2,t,x,y,z;
 cout<<"Enter size(n) of 2d(n*n) matrix: ";
 cin>>n;
 cout<<"\nEnter the values of 2d matrix: ";
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 cin>>a[i][j];		//take matrix from user
 k[l++]=a[i][j];
 }
 }
 cout<<"\nUser input matrix is:"<<endl;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 cout<<a[i][j]<<" ";	// display matrix
 }
 cout<<endl;
 }

 for(i=0;i<n*n;i++)
 {
 for(j=i+1;j<n*n;j++)
 {
 if(k[i]>k[j])
 {
 t=k[i];
 k[i]=k[j];
 k[j]=t;
 }
 }
 }
 cout<<"\nEnter the kth value: "<<endl;
 cin>>x;
 cout<<"\nEnter the jth value: "<<endl;
 cin>>y;
 for(i=0;i<n*n;i++)
 {
if(i==(x-1))
 {
 square1=k[i]*k[i];
 }
 else if(i==(y-1))
 {
 square2=k[i]*k[i];
 }
 }
 cout<<"\nSum is: "<<square1+square2;
}
