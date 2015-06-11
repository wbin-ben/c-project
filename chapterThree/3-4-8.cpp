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
template <class T>
T sum(T a[], int n, T b[], int m)
{
	return sum(a, n) + sum(b, m);
}
int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int s1 = sum(a, 5);
	int s2 = sum(b, 10);
	int s3 = sum(a, 5, b, 10);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}