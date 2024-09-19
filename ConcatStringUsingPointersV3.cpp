#include<iostream>
using namespace std;

int length(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++);
      	len=i;
    return len;	
}

char strcatp(char *str1,char *str2, char str[])
{	
	char *s1,*s2;
	int i,j;
	
	int n1=length(str1);
	int n2=length(str2);
	s1=str1;
	s2=str2;	
	char *str5=str;

    for(i=0;i<n1;i++)
    {
    	*str5=*s1;
		str5++;
		s1++;		
	}	
    for(j=0;j<n2;j++)
    {
    	*str5=*s2;
		str5++;
		s2++;			
	}
	*str5='\0';
	
	/*for(i=(n1+n2-1);i>=0;i--)
    {
    	str5--;
	}*/
	
	/*for(i=0;i<(n1+n2);i++)
    {
    	str[i]=*str5;
		//cout<<*str5;		
		str5++;		
	}   */ 	
}

int main()
{    
    char str12[50]="ab",str13[50]="cd",str5[50];
    int i;
	strcatp(str12,str13,str5);  
	for(i=0;str5[i]!='\0';i++)
    {
    	cout<<str5[i];					
	}  
    
	return 0;
}
