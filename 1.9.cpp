#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;
int main()
{
	char a[] = "wearehere!", b[11];
	reverse(a, a + 10);
	copy(a, a + 10, ostream_iterator<char>(cout, " "));
	cout << endl;

	copy(a, a + 10, b);

	sort(a, a + 10);
	cout << a << endl;
	cout << b << endl;

	reverse_copy(a, a + 10, b);
	cout << b << endl;

	reverse(b + 2, b + 8);
	cout << b << endl;
	copy(b + 2, b + 8, ostream_iterator<char>(cout, " "));
	cout << endl;

	sort(a, a + 10, greater<char>());
	cout << a << endl;

	char* x = find(a, a + 10, 'e');
	if(*x == 'e')
		cout << (*x == 'e')<<  " " << x << endl;
	else
		cout << *x << endl;
	x = find(a, a + 10, 'o');
	if(*x == 'o')
		cout << (*x == 'o') << endl;
	else
		cout << (*x == 'o') << " " << x << endl;
}