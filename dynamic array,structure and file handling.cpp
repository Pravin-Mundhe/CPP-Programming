#include<iostream>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

/*class sacc
{
	int sbal=0;
	public:
		static float r;	
		//sacc(int b,float r1)
		//{
		//	sbal=b;
		//	r=r1;
		//}	
		void calc(int b,float r1)
		{	
			sbal=b;
			r=r1;		
			cout<<"monthly interest is: "<<((sbal*r)/12);
		}
		void setr(float r1)
		{
			r=r1;
			cout<<"\nnew interest rate is: "<<r;
		}
};
float sacc::r=0;
int main()
{	
	//sacc s1(1000,.09);
	sacc s1;
	s1.calc(1000,.09);
	s1.setr(.08);
	
	return 0;
}*/


class complex
{
	public:
		int p,q;
		void addition(complex c1, complex c2)
		{
			p=c1.p+c2.p;
			q=c1.p+c2.q;
			cout<<"Addition is:"<<c1.p+c2.p<<"+"<<c1.p+c2.q<<"i";
		}
		void multiplication(int p1, int q1,int p2, int q2)
		{
			cout<<"\nMultiplication is:"<<(p1*p2-q1*q2)<<"+"<<(p1*q2+q1*p2)<<"i";
		}
};

int main()
{	
	complex c1,c2,c3;
	c1.p=5;
	c1.q=6;
	c2.p=2;
	c2.q=4;
	c3.addition(c1,c2);
	cout<<"\n in main"<<c3.p<<" "<<c3.q;
	c1.multiplication(c1.p,c1.q,c2.p,c2.q);
	
	return 0;
}

/*int main()
{
	int i;
	ofstream out;
	string line="It is hot and humid out side",word;
	
	out.open("input.txt",ios::out); 
	out<<line<<endl;
	out.close();	
	
	ifstream in;	
	in.open("input.txt",ios::in); // by default open mode = ios::in mode 
	out.open("output.txt",ios::out);
	cout<<"Content of input.txt is:";	
	while(in>>word)
	{	
		cout<<word<<" ";
		if(word[0]=='a'|word[0]=='e'|word[0]=='i'|word[0]=='o'|word[0]=='u'|word[0]=='A'|word[0]=='E'|word[0]=='I'|word[0]=='O'|word[0]=='U')	
			out<<word<<" ";	
	}
	out<<endl;
	in.close();				
	out.close();	
		
	in.open("output.txt",ios::in); // by default open mode = ios::in mode 	
	cout<<"\nContent of output.txt is:\n";
	while(in)
	{
		getline(in,line);
		cout<<line<<"\n";
	}
	in.close();
	return 0;
}*/

/*int main()
{
    char fileOne[30], fileTwo[30], fileTarget[30], ch;
    fstream fpsOne, fpsTwo, fpTarget;
    
    int i = 0, j, n = 0, min, index; 
    int arr[50]; 
    FILE* fptr;     
    
    /*cout<<"Enter the Name of First Source File: ";
    gets(fileOne);
    cout<<"Enter the Name of Second Source File: ";
    gets(fileTwo);
    fpsOne.open("file1.txt", fstream::in);
    fpsTwo.open("file2.txt", fstream::in);
    if((!fpsOne) || (!fpsTwo))
    {
        cout<<"\nError Occurred (First Source File)!";
        return 0;
    }
    else
    {
        //cout<<"\nEnter the Name of Target File: ";
        //gets(fileTarget);
        fpTarget.open("output.txt", fstream::out);
        if(!fpTarget)
            printf("\nError Occurred (Target File)!");
        else
        {
            while(fpsOne>>noskipws>>ch)
                fpTarget<<ch;
            fpTarget<<"\n";
            while(fpsTwo>>noskipws>>ch)
                fpTarget<<ch;
            cout<<"\nContent of Two File Merged Successfully into Third!";
        }
    }
    fpsOne.close();
    fpsTwo.close();
    fpTarget.close();
    cout<<endl;   
    
    	// opening the integer file. 
	fptr = fopen("output.txt", "r"); 

	// scanning integer from file to array 
	while (fscanf(fptr, "%d", &arr[i]) == 1) 
	{ 
		// for counting the number of elements 
		n++; 

		// for incrementing the array index 
		i++; 
	} 

	for (i = 0; i < n - 1; i++) 
	{ 
		min = arr[i]; 
		for (j = i + 1; j < n; j++) 
		{ 
			if (arr[j] < min) 
			{ 
				min = arr[j]; 
				index = j; 
			} 
		} 

		// swapping the smallest number with 
		// the current arr[i]th value 
		int temp = arr[i]; 
		arr[i] = min; 
		arr[index] = temp; 
	} 

	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 

    
    return 0;
}


/*int main()
{
	int i,j;	
	ofstream out;
	string line="It is  humid  out  side.",line3;
	char ch[50];
	
	out.open("input.txt",ios::out); 
	out<<line<<endl;

	out.close();	
	
	ifstream in;	
	in.open("input.txt",ios::in); 	
	cout<<"Content of input.txt is:";	
	while(in)
	{
		getline(in,line);
		cout<<line;
		for(i=0,j=0;line[i]!='\0';i++)
		{						
			if(line[i]==' '&&line[i+1]==' ')
			{				
				ch[j]=line[i];
				i++;
				j++;
			}	
			else
			{
				ch[j]=line[i];				
				j++;	
			}	
		}	
	}
	in.close();	
		
	out.open("output.txt",ios::out);
	out<<ch<<endl;		
	out.close();
		
	in.open("output.txt",ios::in); // by default open mode = ios::in mode 	
	cout<<"\nContent of output.txt is:\n";
	while(in)
	{
		getline(in,line3);
		cout<<line3<<"\n";
	}
	in.close();
	return 0;
}

/*int main()
{
	int i,a=0,d=0,sc=0;
	ofstream out;
	string line="It is 12 #humid outside.";
	
	out.open("input.txt",ios::out); 
	out<<line<<endl;

	out.close();	
	
	ifstream in;	
	in.open("input.txt",ios::in); // by default open mode = ios::in mode 
	cout<<"Content of input.txt is:";	
	while(in)
	{
		getline(in,line);
		cout<<line;
		for(i=0;line[i]!='\0';i++)
		{
			cout<<line[i];
			if((line[i]>='a' && line[i]<='z')|(line[i]>='A' && line[i]<='Z'))
				a++;
			else if (line[i]>='0' && line[i]<='9')
				d++;
			else
				sc++;
		}
	}
	in.close();
	
	//ofstream out;
	out.open("output.txt",ios::out);
	out<<"No. of Alphabets: "<<a<<endl;
	out<<"No. of Digits: "<<d<<endl;
	out<<"No. of Special Characters: "<<sc<<endl;	
	out.close();
	
	//ifstream in;	
	in.open("output.txt",ios::in); // by default open mode = ios::in mode 	
	cout<<"\nContent of output.txt is:\n";
	while(in)
	{
		getline(in,line);
		cout<<line<<"\n";
	}
	in.close();
	return 0;
}

/*struct cricket
{
	string pname,tname;
};

int main()
{	
	int i;
	cricket p[5];
	p[0].pname="virat";
	p[0].tname="india";
	
	p[1].pname="root";
	p[1].tname="england";
	
	p[2].pname="smith";
	p[2].tname="australia";
	
	p[3].pname="morgan";
	p[3].tname="england";
	
	p[4].pname="rohit";
	p[4].tname="india";
	
	for(i=0;i<5;i++)	
	{
		if(p[i].tname=="india")
			cout<<p[i].pname<<"-"<<p[i].tname<<"\n";
	}
	
	for(i=0;i<5;i++)	
	{
		if(p[i].tname=="england")
			cout<<p[i].pname<<"-"<<p[i].tname<<"\n";
	}
	
	for(i=0;i<5;i++)	
	{
		if(p[i].tname=="australia")
			cout<<p[i].pname<<"-"<<p[i].tname<<"\n";
	}
	return 0;
}

/*struct bankdeposit
{
	int amt,t;
};
struct date
{
	int d,m,y;
};

int main()
{	
	float r=0,f;
	bankdeposit b1;
	b1.amt=1000;
	b1.t=2;
	
	date d1;
	d1.y=1960;
	
	int age1=2021-d1.y;
	cout<<"Age is:"<<age1;
	if(age1>=60)
		r=0.09;
	else
		r=0.08;
		
	f=b1.amt+(b1.amt*r*b1.t);
	cout<<"\nfinal amount="<<f;
	
	bankdeposit b2;
	b2.amt=1000;
	b2.t=2;
	date d2;
	d2.y=2000;
	int age2=2021-d2.y;
	cout<<"\nAge is:"<<age2;
	r=0.08;
	f=b2.amt+(b2.amt*r*b2.t);
	cout<<"\nfinal amount="<<f;
	
	return 0;
}
/*
struct point
{
	int x,y;
};

int main()
{	
	point p1,p2,p3;
	
	cout<<"\nenter x and y co-ordinate of point 1:";
	cin>>p1.x>>p1.y;
	
	cout<<"\nenter x and y co-ordinate of point 2:";
	cin>>p2.x>>p2.y;
	
	
	cout<<"\ncoordinates of third point are:";
	cout<<"("<<(p1.x*p2.x)<<","<<(p1.y*p2.y)<<")";	
	
	return 0;
}

/*
struct student
{
	string name;
	int rollno;
};

int main()
{	
	student s1[2];
	
	for(int i=0;i<2;i++)
	{
		cout<<"\nenter student details of "<<i+1;
		cin>>s1[i].name>>s1[i].rollno;
	}
	
	cout<<"\nstructure members are:";
	for(int i=0;i<2;i++)
	{
		cout<<s1[i].name<<" "<<s1[i].rollno<<"\n";
	}
	
	return 0;
}

/*int main()
{	
	int a=4,b=6;
	
	cout<<"a="<<a<<" b="<<b;
	cout<<"\na&b="<<(a&b);
	cout<<"\na|b="<<(a|b);
	cout<<"\na^b="<<(a^b);
	cout<<"\n~a="<<(~a);
	cout<<"\na<<2="<<(a<<2);
	cout<<"\na>>2="<<(b>>2);
	
	int c=(a&b);
	int a1=(a^b);
	int b1=(c<<1);
	int sum=a1+b1;
	cout<<"\na+b="<<sum;
	return 0;
}

/*int main()
{	
	int i=0,n1=5,n2=10,j,temp=0;
	int *a=new int[n1]{1,3,2,5,4};
	
	cout<<"Array A is: ";
	for (i = 0; i < n1; i++) 
		cout<<a[i]<<" ";
	
	int* b=new int[n2];
	
	for (i = 0; i < n1; i++) 
		b[i]=a[i];
	//cout<<"\nenter remaining five elements:";
	//for (i = 5; i < n2; i++)
	//	cin>>b[i];
	b[5]=8;
	b[6]=7;
	b[7]=9;
	b[8]=6;
	b[9]=10;
	cout<<"\nArray B is: ";	
	for (i = 0; i < n2; i++) 
		cout<<b[i]<<" ";
		
	for (i = 0; i < n2-1; i++)
	{
		for (j = 0; j < n2-i-1; j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	
	cout<<"\nAfter sorting Array B is: ";
	for (i = 0; i < n2; i++) 
		cout<<b[i]<<" ";
		
	delete[] a;
	delete[] b;	
	
	return 0;
}*/
