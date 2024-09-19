#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int val;
	char strn1[] = "12546";

	val = atoi(strn1);
	printf("String value = %s\n", strn1);
	printf("Integer value = %d\n", val);

	char strn2[] = "GeeksforGeeks123";
	val = atoi(strn2);
	printf("String value = %s\n", strn2);
	printf("Integer value = %d\n", val);

	return (0);
}


/*class Smartptr
{
	int *ptr;
	public:
		explicit Smartptr(int *p)	
		{
			ptr=p;
		}
		~Smartptr()
		{
			delete(ptr);
		}
		int& operator*() { return *ptr; } 
};

int main()
{
	Smartptr ptr(new int());
	*ptr=20;
	cout<<"*ptr= "<<*ptr;
	return 0;
}

class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test (int x = 0, int y = 0) { this->x = x; this->y = y; } 
  Test& setX(int a) { x = a; return *this; } 
  Test& setY(int b) { y = b; return *this; } 
  void destroy()  { delete this; } 
  void print() { cout << "x = " << x << " y = " << y << endl; } 
  
}; 
  
int main() 
{ 
  Test obj1(0,0); 
  obj1.setX(10).setY(20); 
  obj1.print(); 
  return 0; 
} 

/*class Test
{
	private:
		int x=0,y=0;
	public:
		Test(int x, int y){this->x=x;this->y=y;		}
		Test& set(int a, int b){x=a;y=b;return *this;	}
		Test& show(){cout<<"x= "<<x<<" y= "<<y;		}
};

int main()
{
	Test obj(5,5);
	obj.set(10,20);
	obj.show();
	return 0;
}


/*int main()
{
	int x=10;
	int *ptr=&x;
	int **ptr1=&ptr;
	cout<<x;
	cout<<*ptr;
	cout<<**ptr1;
}

/*void swap(char *&str1, char *&str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}
 
int main()
{
    char *str1 = "GEEKS";
    char *str2 = "FOR GEEKS";
    swap(str1, str2);
    cout<<"str1 is "<<str1<<endl;
    cout<<"str2 is "<<str2<<endl;
    return 0;
}

/*int& fun()
{
	static int x=10;
	return x;
}

int main()
{
	fun()=30;
	cout<<fun();
	return 0;
}*/
