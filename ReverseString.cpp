#include<iostream>
using namespace std;

void Reverse(char str[], int length)
{
	char rev[20];
	int j, i=0;
	for(j=length-1;j>=0;j--)
	{
		rev[i]=str[j];
		i++;
	}	
	rev[i]='\0';
	cout << "Reverse string is: " << rev;        
}

int main()
{
	char str[100];
	int i, length=0;

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
    
    for(i=0;str[i]!='\0';i++);
      	length=i;	
        
    Reverse(str,length);
    
	return 0;
}
