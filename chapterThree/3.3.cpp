#include <iostream>
#include <iterator>
using namespace std;
void swap(int[]);
int main()
{
	int a[] = {3, 8};
	swap(a);
	cout << "返回为: a= " << a[0] << " b = " << a[1] << endl;
	copy(a, a + 2, ostream_iterator<int>(cout, " "));
	cout << endl;
}
void swap(int a[])
{
	int temp = a[0];
	a[0] = a[1]; 
	a[1] = temp;
	cout << "变换为: a = " << a[0] << " b = " << a[1] << endl;
}