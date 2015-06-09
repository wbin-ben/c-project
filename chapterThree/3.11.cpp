#include <iostream>
using namespace std;
int max(int, int);
int main()
{
	cout << max(55, max(25, 39)) << endl;
}
int max(int s1, int s2)
{
	return (s1 > s2)? s1: s2;
}