// C++ implementation to read
// file word by word
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#include <fstream>

// driver code
int main()
{
	// filestream variable file
	fstream file;
	string word, t, q, filename;
      string search,str1;
      int flag=0,n,i;
      ofstream myfile;
      
	cout << "Please enter a name: ";
	cin  >> search;
	// filename of the file
	filename = "file.txt";
    
	// opening file
	file.open(filename.c_str());

	// extracting words from the file
	while (file >> word)
	{
		str1=word;
		//Find words contains substring
		if(word.find(search) != string::npos)
		{
			//cout<<word<<"\n";
            
            //To reverse string
            n = word.size();
    
             for (int i = 0; i < n / 2; i++)
              swap(word[i], word[n - i - 1]);
              
            //cout<<word<<"\n";
            //To check palindrome string
            int res = str1.compare(word);
 
              if (res == 0)
              {
              	// Write output in file
              	
                myfile.open ("fileoutput.txt");
                myfile <<word<<"\n";
                myfile.close();
              	 //cout << "\nBoth the input strings are equal." << endl;
                 cout<<word<<"\n";
			  }	       
		}
        //cout <<word<< endl;		
	}  
	return 0;
}

