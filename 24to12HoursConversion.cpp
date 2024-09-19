#include<iostream>
using namespace std;

void input(int &mhour,int &mmin,int &msec)
{
	cout<<"Enter the time in HH:MM:SS (military) fomrat: ";
	cin>>mhour>>mmin>>msec;
	cout<<"Input is "<<mhour<<":"<<mmin<<":"<<msec<<endl;
}

char calculate(int &mhour, char m)
{
	if(mhour==0)
	{
		m='A';
		mhour=mhour+12;
	}
	else if(mhour<=11)
	{	
		m='A';				
	}
	else if(mhour==12)
	{
		m='P';		
	}
	else
	{
		m='P';
		mhour=mhour-12;
	}
	return m;
}

void output(int mhour, int mmin, int msec, char m)
{
	cout<<"The time in 12 hour format is "<<mhour<<":"<<mmin<<":"<<msec<<" "<<m;
}

int main()
{
	int mhour,mmin,msec;
	char m;
	input(mhour,mmin,msec);
	m=calculate(mhour, m);
	output(mhour,mmin,msec,m);
}
