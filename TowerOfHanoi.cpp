#include<iostream>
using namespace std;

void TOH(int N, char from, char AUXrod, char to)
{
	if(N==1)
	{
		cout<<"Move disk 1 from rod "<<from<<" to rod "<<to<<endl;
		return;
	}
	TOH(N-1,from,to,AUXrod);
	cout<<"Move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
	TOH(N-1,AUXrod,from,to);
}

int main()
{
	int N, count=0;
	cout<<"enter the number:";
	cin>>N;
	cout<<"Input number is:"<<N<<endl;
	TOH(N,'A','B','C');
	return 0;
}
