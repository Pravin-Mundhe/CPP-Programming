#include <iostream>
using namespace std;

int main()
{    
    string a[4]={"abc","abcd","aba","abd"},temp;
    int i,j;

    cout << "Strings are: "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    
    for (int i = 0; i < 4; ++i) 
	{
        for (int j = 0; j < 4 - i-1; ++j)
		 {
            if (a[j] > a[j + 1]) 
			{
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }    

    cout << "Strings are: "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    return 0;
}
