#include <iostream>
using namespace std;
int a[] = {2, 4, 6, 8, 10,12};
int &index(int i);
int main()
{
	cout << a[3] << endl;
	index(3) = 16;
	cout << a[3] << endl;
}
int &index(int i)
{
	return a[3];
}