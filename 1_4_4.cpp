#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace  std;
int a[] = {1, 2, 3, 4, 5, 6, 7, 8}, b[8];
int main()
{
	cout <<  "数组a中‘4'的位置是：" << find(a, a + 8, 4) << endl;
	copy(a, a + 8, b);
	reverse(a , a + 8);
	cout <<  "数组a中‘4'的位置是：" << find(a, a + 8, 4) << endl;
	cout << "数组a的内容：" << endl;
	copy(a, a + 8, ostream_iterator<int>(cout,  " ")) ;
	cout << endl;
	cout << "数组b的内容：" << endl;
	copy(b, b + 8, ostream_iterator<int>(cout,  " ")) ;
	cout << endl;
}