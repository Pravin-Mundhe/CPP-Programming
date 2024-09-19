#include<iostream>
using namespace std;

int length(string str)
{
	int i,len=0;	
	char s1[10];
	s1=str;
	for(i=0;*(s1+i)!='\0';i++);
      	len=i;
	/*for(i=0;s1[i];i++);
      	len=i;*/
    return len;	
}


void strcatp(string str1,string str2, string str5)
{	
	int i,j;
	
	int n1=length(str1);
	int n2=length(str2);
	s1=str1;
	s2=str2;
	//string *str5=&str6;
	
	//cout<<n1<<" "<<n2<<" "<<s1<<endl;

    for(i=0;i<n1;i++)
    {
    	*str5=*s1;
		str5++;
		s1++;		
	}
	//str5++;
    for(j=0;j<n2;j++)
    {
    	*str5=*s2;
		str5++;
		s2++;			
	}
	//*str5='\0';
	
	for(i=(n1+n2-1);i>=0;i--)
    {
    	str5--;
	}
	
	for(i=0;i<(n1+n2);i++)
    {
    	cout<<*str5;		
		str5++;		
	}    
}

int main()
{       
    string str12="ab",str13="cd",str5;
    
	strcatp(str12,str13,str5);    
    
	return 0;
}
