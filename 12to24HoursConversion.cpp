#include<iostream>
using namespace std;

char input(int &hours,int &min,char m)
{
	cout<<"Enter the time in 12 fomrat: ";
	cin>>hours>>min>>m;
	cout<<"Input is "<<hours<<":"<<min<<" "<<m<<endl;
	return m;
}

/*int calculate(int &hours, char m)
{
	if(m=='P')
	{
		return(hours+12);
	}	
	else return hours;
}*/
void calculate(int &hours, char m)
{
	if(m=='P')
	{
		hours=hours+12;
	}		
}

void output(int hours, int min)
{
	cout<<"The time in 24 hour format is "<<hours<<":"<<min;
}

int main()
{
	int hours,min;
	char m;
	m=input(hours,min,m);
	calculate(hours, m);
	output(hours,min);
}
