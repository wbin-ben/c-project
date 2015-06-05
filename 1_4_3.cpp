#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	float *p;
	p = new float[15];
	
	for(int i = 0; i < 15; i++)
	{
		cin >> *(p + i);
		*(p + i) = i;
	}
	sort(p, p + 15);
	int sum = 0;
	cout<<"输入15个float类型的值：" << endl;
	for(int i = 0; i < 15; i++)
	{
		cout << *(p + i) << " , " ;
		sum += *(p + i);
	}
	cout << endl;
	cout << "和是：" << sum << endl;
	cout << "最小的是：" << *(p) << endl;

	delete p; 
}