#include<iostream>
using namespace std;

void Reverse(char str[], int length)
{
	if(length<0)      
		return;
	else
		{
			cout<<str[length];
			Reverse(str,length-1);			
		}
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
    
	cout << "Reverse string is:"; 
    Reverse(str,length);
    
	return 0;
}
