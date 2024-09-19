#include <iostream> 
using namespace std; 

class op
{
	//private:
	int a,b,c,add;
	float div;
	public:
		void get();
		void sum();
		void division();
};
inline void op::get()
{
	cout<<"\nenter first value:";
	cin>>a;
	cout<<"\nenter second value:";
	cin>>b;
}
void op::sum()
{
	add=a+b;
	cout<<"\nsum is: "<<add;
	
}

inline void op::division()
{
	div=a/b;
	cout<<"\ndivision is: "<<div;	
}

int main()
{
	cout<<"program using inline functions\n";
	op obj;
	obj.get();
	obj.sum();
	obj.division();
	return 0;
}


/*void swap(int &a, int &b) 
{ 
	int temp;
	temp=a;
	a=b;
	b=temp;
} 

void swap(int &a, int &b) 
{ 
	a=a+b;
	b=a-b;
	a=a-b;
}

int main() 
{ 
	int x = 10,y=20; 
	cout << "Before swap x = " << x<<" y= "<<y<<"\n"; 
	swap(x,y); 
	cout << "After swap x = " << x<<" y= "<<y<<"\n";  
	return 0; 
} */

