#include<iostream>
using namespace std;
/*void reverse1(string &str, int k)
{
    static int i = 0;
 
    // if the end of the string is reached
    if (k == str.length()) {
        return;
    }
 
    reverse(str, k + 1);
 
    if (i <= k) {
        swap(str[i++], str[k]);
    }
}*/

int length(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++);
      	len=i;
    return len;	
}

int compare(char str1[], char str2[])
{
	int len1=length(str1);
    int len2=length(str2);
	
	if(len1==len2)
    {
    	for(int i=0;i<len1;i++)
    	{
    		if(str1[i]!=str2[i])
    			{
    				return 0;
				}
		}
		return 1;
	}
	else
		return 0;
}

int comparen(char str1[], char str2[],int n)
{
	int len1=length(str1);
    int len2=length(str2);	
	
    for(int i=0;i<n;i++)
    {
    	if(str1[i]!=str2[i])
    	{
    		return 0;
		}
	}
	return 1;	
}

void strcpyy(char str1[],char str3[])
{
	int len1=length(str1);
	for(int i=0;i<len1;i++)
    {
    	str3[i]=str1[i];		
	}
    cout <<"String3 is: "<<str3<<endl; 
}

void strncpyy(char str1[],char str4[],int n)
{
	int i;
	for(i=0; i<2;i++)
    {
    	str4[i]=str1[i];		
	}	
    cout <<"String4 after copying two characters from str1 is: "<<str4<<endl;  
}

void strcatt(char str1[],char str2[],char str5[])
{
	int i,j;
	int len1=length(str1);	
    for(i=0;i<len1;i++)
    {
    	str5[i]=str1[i];		
	}
    for(j=0;str2[j]!='\0';j++)
    {
    	str5[i]=str2[j];
		i++;		
	}
    cout <<"Concatenated String of "<<str1<<" and "<<str2<<" is: "<<str5<<endl; 
}

void strncatt(char str1[],char str2[],char str6[],int n)
{
	int i,j;
	int len1=length(str1);	
    for(i=0;i<len1;i++)
    {
    	str6[i]=str1[i];		
	}
    for(j=0;str2[j]!='\0'&&j<n;j++)
    {
    	str6[i]=str2[j];
		i++;		
	}
    cout <<"string6 after copying str1 and appending 2 characters from str2 is: "<<str6<<endl; 
}


int atoii(char str7[])
{
	int i,num=0;
	int len1=length(str7);
	for(i=0;i<len1;i++)
    {
    	if(str7[i]>=48 && str7[i]<=57)		
    		num=num*10+(str7[i]-'0');
    	else
    	{
    		return -1;
		}
	}
	return num;
}

void reverse(char str[], int k=0)
{
	int n=length(str);
	
	if(k==(n/2))    
		return;
		
	swap(str[k],str[n-k-1]);
	reverse(str,k+1);	
}

void reverse2(char *str)
{
	char *start,*end,temp;
	int i;
	
	int n=length(str);
	
	start=str;
	end=str;
	
	for(i=0;i<(n-1);i++)
    {
    	end++;
	}
	
	for(i=0;i<(n/2);i++)
    {
    	temp=*start;
    	*start=*end;
    	*end=temp;
    	start++;
    	end--;
	}	
}

void sortt(string a[], int n)
{
	int i,j;
	string temp;
	cout << "Original String array is: "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    
    for (i = 0; i < n; ++i) 
	{
        for (j = 0; j < n - i-1; ++j)
		 {
            if (a[j] > a[j + 1]) 
			{
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    } 
    cout << "Strings are: "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
}

void vandc(char str12[])
{
	int i=0,v=0,c=0;		
	while(str12[i]!='\0')
	{
		if(str12[i]=='a'||str12[i]=='e'||str12[i]=='i'||str12[i]=='o'||str12[i]=='u'||
		str12[i]=='A'||str12[i]=='E'||str12[i]=='I'||str12[i]=='O'||str12[i]=='U')
			v++;
		else
			c++;
		i++;
	}
	cout<<"No. of vowels="<<v<<" and consonants="<<c<<"\n";
}

void removi(char str13[],char str14[])
{
	int i=0,j=0;	
	while(str13[i]!='\0')
	{
		if(str13[i]>=48 && str13[i]<=57)
		{
			i++;
			continue;
		}			
		else
		{
			str14[j]=str13[i];	
			i++;
			j++;
		}		
	}
	str14[j]='\0';		
}

int search(char str15[], char str16[])
{
	int n1=length(str15);
	int n2=length(str16);
	int i,j,k,l;
	for(i=0;i<n1;i++)
	{
		k=i;
		j=0;
		l=i;				
		while(str16[j]==str15[l])
		{
			j++;
			l++;
		}
		if(str16[j]=='\0')
			return k;		
	}
	if(i==n1)
		return -1;	
}

int main()
{
	char str1[50]="peter",str2[50]="galvin",str3[50],str4[50],str5[50],str6[50];
	int i,j,len1=0,len2=0,flag=0;	

    cout <<"String1 is: "<<str1<<endl;
    cout <<"String2 is: "<<str2<<endl;    
          	
    len1=length(str1);
    len2=length(str2);
    
    cout <<"Length of String1 is: "<<len1<<endl;
    
    if(compare(str1,str2))    
			cout <<"String1 is equal to string2"<<endl;
	else
		cout <<"String1 is not equal to string2"<<endl;	
	
	int n=2;
	if(comparen(str1,str2,n))    
		cout <<n<<" characters from str1 and str2 are equal"<<endl;
	else
		cout <<n<<" characters from str1 and str2 are not equal"<<endl;
		
	strcpyy(str1,str3);	
    strncpyy(str1,str4,n);    
    
    strcatt(str1,str2,str5);
    strncatt(str1,str2,str6,n);    
	
	char str7[50]="123";
	int num=atoii(str7);
	if(num!=-1)
		cout<<"number corresponding to "<<str7<<" is: "<<num<<"\n";
	else
		cout<<"Invalid input";
    
    char str8[50]="madam",str9[50];
    strcpyy(str8,str9);	    
    reverse(str9);
    //reverse1(str9, 0);
    cout<<"reverse string of "<<str8<<" is "<<str9<<"\n";
    if(compare(str8,str9))    
		cout<<str8 <<" is palindrome"<<endl;
	else
		cout<<str8 <<" is not palindrome"<<endl;	
    
    char str10[50]="deed",str11[50];
    strcpyy(str10,str11);	    
    reverse2(str11);    
    cout<<"reverse string of "<<str10<<" is "<<str11<<"\n";
    if(compare(str10,str11))    
		cout<<str10 <<" is palindrome"<<endl;
	else
		cout<<str10 <<" is not palindrome"<<endl;
    
    string a[4]={"abc","abcd","aba","abd"};
    sortt(a,4);
    
    char str12[50]="Abhishek";
    vandc(str12);
    
    char str13[50]="Jo1hn23wic95k",str14[50];
    removi(str13,str14);    
    cout<<str13<<" after removing integer values is "<<str14<<"\n";	
    
    char str15[50]="mamaheswaran",str16[50]="mahe";
    int f=search(str15,str16);
    if(f==-1)
    	cout<<str16<<" not found in "<<str15<<"\n";
    else
    	cout<<str16<<" found in "<<str15<<" at position "<<f+1<<"\n";
    	
    	
    	
    
	return 0;
}
