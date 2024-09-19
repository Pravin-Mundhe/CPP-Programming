#include<iostream>
using namespace std;

bool Palindrome(char str[],int s, int e)
{
	if(e==0) // An empty string is considered as palindrome 
		return true;
	if(s==e) // If there is only one character
		return true;
	if(str[s]!=str[e]) //If first and last characters do not match 
		return false;
	if(s<e)	//If there are more than  
    // two characters, check if  
    // middle substring is also  
    // palindrome or not. 
		Palindrome(str,s+1,e-1);
	//return true;
		
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
    
    cout<<"\length of the string is: "<<length<<endl;
        
    if(Palindrome(str,0,length-1))
    	cout<<"String "<<str<<" is a palindrome string"<<endl;
    else
    	cout<<"String "<<str<<" is not a palindrome string"<<endl;
    
	return 0;
}
