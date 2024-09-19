#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	int i,j,size;
	ifstream f1,f2,f3;
	ofstream f4;
	string a[100],temp;	
	
	f1.open("file1.txt",ios::in); 
	f2.open("file2.txt",ios::in); 
	f3.open("file3.txt",ios::in); 	
	
	i=0;
	while(!f1.eof())
	{
		getline(f1,a[i]);
		i++;
	}
	while(!f2.eof())
	{
		getline(f2,a[i]);
		i++;
	}
	while(!f3.eof())
	{
		getline(f3,a[i]);
		i++;
	}	
	
	size=i--;
	
	for(j=0;j<size;j++)
		cout<<a[j]<<" ";
	
	for (i = 1; i < (size); i++) 
	{
        for (j = 0; j < (size-i); j++) 
		{
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }	
	
	f4.open("file4.txt",ios::out); 
	for(j=0;j<size;j++)
	{
		f4<<a[j]<<endl;		
	}
	
	f1.close();
	f2.close();
	f3.close();
	f4.close();
	
	cout<<"\nContent of file4.txt is:\n";
	ifstream f5;
	f5.open("file4.txt",ios::in);
	while(!f5.eof())
	{
		getline(f5,temp);
		cout<<temp<<endl;
	}
	f5.close();
	
	return 0;
}



