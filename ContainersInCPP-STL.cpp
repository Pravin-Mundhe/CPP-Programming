#include<iostream>
#include<utility>
#include<list>
#include<iterator>
using namespace std;

void show(list <int> g)
{
	cout<<"\n";
	list<int>::iterator i;
	for(i=g.begin();i!=g.end();i++)
		cout<<*i<<" ";
	cout<<"\n";
}

int main()
{	
	list <int> l1,l2;
	
	for(int i=0;i<10;i++)
	{
		l1.push_back(i*2);
		l2.push_front(i*3);
	}
	
	cout<<"\nList1 is: ";
	show(l1);
	
	cout<<"\nList2 is: ";
	show(l2);
	
	cout<<"\nl1.front()= "<<l1.front();
	cout<<"\nl1.back()= "<<l1.back();
	
	cout<<"\nafter l1.pop_front()";
	l1.pop_front();
	show(l1);
	
	cout<<"\nafter l2.pop_back()";
	l2.pop_back();
	show(l2);
	
	cout<<"\nl1 after reverse:";
	l1.reverse();
	show(l1);
	
	cout<<"\nl2 after sorting:";
	l2.sort();
	show(l2);
	
	return 0;
}

/*int main()
{	
	pair <int,string> pair1;
	//cout<<pair1.first<<" "<<pair1.second<<"\n";
	
	pair1.first=100;
	pair1.second="abc";
	
	cout<<pair1.first<<" "<<pair1.second<<"\n";
	
	cout<<"contents of pair 2 and pair3 before swap\n";
	pair <double,string>pair2;
	pair2=make_pair(10.5,"pravin");
	cout<<pair2.first<<" "<<pair2.second<<"\n";	
	
	pair <double,string>pair3(20.5,"pooja");
	cout<<pair3.first<<" "<<pair3.second<<"\n";		
	
	return 0;
}*/
