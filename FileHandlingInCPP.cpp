#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <sstream>
using namespace std;

unsigned long long int fsize(const char* name)
{
	FILE *f1=fopen(name,"rb");
	fseek(f1,0,SEEK_END);
	unsigned long long int size=ftell(f1);
	fclose(f1);
	return size;
}

bool exist(const char* name)
{
	FILE *f1;
	f1=fopen(name,"r");
	if(f1)
	{
		fclose(f1);
		return (true);
	}
	else
		return false;		
}

int main()
{	
	printf("%llu bytes\n",fsize("recursion.docx"));
	printf("%llu bytes\n",fsize("recursion practice.pdf"));	
	
	bool f1=exist("recursion.docx");
	if(f1)
		cout<<"file exist\n";
	else
		cout<<"file does not exist\n";
	
	//rename("recursion.docx","recursion practice.docx");
	//remove("recursion - Copy.docx");
	
	
	return 0;
}


/*int main()
{	
	fstream file1;
	file1.open("report.csv",ios::out);
	
	if(!file1)
	{
		cout<<"error opening file";
		return 0;
	}
	
	file1<<"pravin"<<","<<30<<"\n";
	file1<<"pooja"<<","<<27<<"\n";
	file1<<"shraddha"<<","<<26<<"\n";
	file1.close();
	
	file1.open("report.csv",ios::in);
	if(!file1)
	{
		cout<<"error opening file";
		return 0;
	}
	vector<string> row;
	string line, word,temp;
	
	while(file1>>temp)
	{
		row.clear();
		getline(file1,line);
		
		stringstream s(line);
		
		while(getline(s,word,','))
		{
			row.push_back(word);
		}
		cout<<row[0]<<" "<<row[1]<<"\n";
	}	
	
	file1.close();
	
	return 0;
}

/*class co
{
	public:
		string name;
		int r;
		
		int input()
		{
			ofstream file1;
			file1.open("sample.txt",ios::out);
			
			if(!file1)
			{
				cout<<"error in creating a file";
				return 0;
			}
			
			co obj;
			
			string str="pravin";
			obj.name=str;
			obj.r=20;
			file1.write((char*)&obj,sizeof(obj));
			
			str="pooja";
			obj.name=str;
			obj.r=10;
			file1.write((char*)&obj,sizeof(obj));
			
			file1.close();			
			
			return 0;			
		}
		int high()
		{
			ifstream file2;
			file2.open("sample.txt",ios::in);
			
			if(!file2)
			{
				cout<<"error in creating a file";
				return 0;
			}
			
			co obj;
			
			file2.read((char*)&obj,sizeof(obj));
			
			int max=0;			
			string hname;
			
			//while(!file2.eof())
			while(file2)
			{
				if(obj.r>max)
				{
					max=obj.r;
					hname=obj.name;
				}
				file2.read((char*)&obj,sizeof(obj));
			}
			
			cout<<"Max rating is "<<max<<" of contestant having name "<<hname;
			
			file2.close();			
			return 0;
		}
		~co(){}
};

int main()
{	
	co obj;
	
	obj.input();
	obj.high();	
	
	return 0;
}

/*int main()
{	
	fstream obj;
	string line;
	
	obj.open("sample.txt",ios::in|ios::out);
	//obj.open("sample.txt",ios::in|ios::out|ios::app); // by default openmode = ios::in|ios::out mode 
    // Automatically overwrites the content of file, To append 
    // the content, open in ios:app 
    // obj.open("sample.txt", ios::in|ios::out|ios::app) 
    // ios::trunc mode delete all content before open 
    //obj.open("sample.txt",ios::in|ios::out|ios::trunc);
    
    while(obj)
    {
    	getline(cin,line);
    	if(line=="-1")
    		break;
    	obj<<line<<"\n";
	}	
	
	obj.seekg(0,ios::beg);
	while(obj)
	{
		getline(obj,line);
		cout<<line<<"\n";
	}
	
	obj.close();
	return 0;
}

/*
int main()
{
	ofstream out;
	string line;
	
	out.open("sample.txt"); // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app)
	
	while(out)
	{
		getline(cin,line);
		if(line=="-1")
			break;
		out<<line<<endl;
	}
	out.close();
	
	/* comment till out.close();
	out.open("sample.txt",ios::app);
	while(out)
	{
		getline(cin,line);
		if(line=="-1")
			break;
		out<<line<<"\n";
	}
	//out.close();
	
	ifstream in;
	in.open("sample.txt"); // by default open mode = ios::in mode 
	
	while(in)
	{
		getline(in,line);
		cout<<line<<endl;
	}
	in.close();
	
	return 0;
}*/



