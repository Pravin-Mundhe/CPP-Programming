#include<iostream>
using namespace std;

int length(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++);
      	len=i;
    return len;	
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

int main()
{
	char str[50],str1[50],str2[50];
	int i, length=0;

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;   	   	
    
    Reverse(str1);
	cout << "Reverse string is: "<<str<<"\n"; 
    if(str1==str)
    	cout<<str<<" is palindrome";
    else
    	cout<<str<<" is not palindrome";
	return 0;
}
