#include <iostream>
#include <iterator>
using namespace std;
int main()
{
	int * p;
	p = new int[100];

	for(int i = 0; i < 100; i++)
	{
		*(p + i) = i;
	}	
	for(int i = 0; i < 100; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl ;
	copy(p, p + 100, ostream_iterator<int>(cout, " "));
	cout << endl;
	delete p;	
}