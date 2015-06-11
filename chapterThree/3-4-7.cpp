#include <iostream>
using namespace std;
template <class T>
T sum(T a[], int n)
{
	int i;
	T s = 0;
	for(i = 0; i < n; i ++)
	{
		s = s + a[i];
	}	
	return s;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int s = sum(a, 5);
	cout << s << endl;
}