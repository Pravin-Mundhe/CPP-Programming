#include<iostream>
using namespace std;
int main() {
   
    int n,c;
  	cout<<"Enter the no.of elements:";
    cin>>n;
    int arr[n],i,j,k,a[n],b[n],sum1,sum2,key;
    cout<<"\nEnter the elments of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
	}
	// Sorting the array
    for (i=1;i<n;i++)
    { 
        key=arr[i]; 
        j=i-1; 
        while(j>=0 && arr[j]>key)
        { 
            arr[j+1]=arr[j]; 
            j=j-1; 
        } 
        arr[j+1]=key; 
    } 
    j=0;
    k=0;
    sum1=0;
    sum2=0;
    
    for(i=n-1;i>=0;i--){
        if(sum1<=sum2) 	// Checking the condition for sum1 and sum2
        {
            sum1 += arr[i];
            a[j]=arr[i]; 	// Adding element to the first array
            j++;
		}
        else 
        {
            sum2 += arr[i]; 
            b[k]=arr[i];	// Adding element to the second array
            k++;
		}
    }
    cout<<"The minimum difference is ";
    if(sum1-sum2>0)
       	cout<<sum1-sum2<<endl;	// Displaying the difference between the sums
    else
       	cout<<sum2-sum1<<endl;
    cout<<"The first subset is ";	// Displaying the arrays
    for(i=0;i<j;i++)
    {
       	cout<<a[i]<<" ";
	}
    cout<<endl;
    cout<<"The second subset is ";
    for(i=0;i<k;i++)
    {
    	cout<<b[i]<<" ";
	}
    return 0;
}

