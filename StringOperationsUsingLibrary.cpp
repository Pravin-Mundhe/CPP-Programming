#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str="geeks for geeks is for geeks";
	stringstream s(str);
	string word;
	
	map<string, int>fw;
	while(s>>word)
		fw[word]++;
		
	map<string, int>::iterator m;
	for(m=fw.begin();m!=fw.end();m++)
		cout<<m->first<<"->"<<m->second<<"\n";
	
	/*char str[]="Geeks-for-Geeks"; 
	
	char *token=strtok(str,"-");
	
	while(token!=NULL)
	{
		cout<<token<<endl;
		token=strtok(NULL,"-");
	}	
	
	/*string line="GeeksForGeeks is a must try";
	
	vector <string> tokens;
	
	stringstream check1(line);
	
	string dlm;
	
	while(getline(check1,dlm, ' '))
	{
		tokens.push_back(dlm);
	}
	
	for(int i=0;i<tokens.size();i++)
		cout<<tokens[i]<<'\n';
	
	/*int i,j;        
	const char *color[4]={"blue","red","yellow"};
	
	for(i=0;i<3;i++)
		cout<<color[i]<<endl;
	cout << "\n";
		
	char colour[4][7] = { "Blue", "Red", "Orange",
                           "Yellow" };
 
    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";
	cout << "\n";
	
	string cooler[]={ "Blue", "Red", "Orange",
                           "Yellow" };
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";
	cout << "\n";
	
		
	
	/*string str1="geeksforgeeks is for geeks";
	string str2="pravin";
	cout<<"str1= "<<str1<<endl;
	cout<<"str2= "<<str2<<endl;
	
	char ch[80];
	
	str1.copy(ch,10,0);
	cout<<"character array after copying: "<<ch<<endl;
	
	str1.swap(str2);
	
	cout<<"strings after swapping"<<endl;
	cout<<"str1= "<<str1<<endl;
	cout<<"str2= "<<str2<<endl;
	
	
	/*string str="geeksforgeeks";
	cout<<"Input is: "<<str<<endl;
	std::string::iterator it;
	std::string::reverse_iterator rit;
	
	cout << "The string using forward iterator is : ";
	for(it=str.begin();it!=str.end();it++)
		cout<<*it;
	cout<<endl;
	
	cout << "The string using reverse iterator is : ";
	for(rit=str.rbegin();rit!=str.rend();rit++)
		cout<<*rit;
	cout<<endl;*/
	
	/*string str;
	cout<<"enter a string: ";
	getline(cin,str);
	cout<<"Input is: "<<str<<endl;
	str.push_back('n');*/
	
	/*string str="geeksforgeeks";
	cout<<"Input is: "<<str<<endl;
	str.resize(10);
	cout<<"String after resize is: "<<str<<endl;
	cout<<"String capacity is: "<<str.capacity()<<endl;
	cout<<"String length is: "<<str.length()<<endl;*/
	
	
			
	return 0;	
}
