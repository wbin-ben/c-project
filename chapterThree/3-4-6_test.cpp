#include <iostream>
using namespace std;

template <class T>
void sort(T a, T b, T c)
{
	T array[3];
	T temp;
	array[0] = a;
	array[1] = b;
	array[2] = c;
	for(int i = 0; i< 3-1; i++)
	{
		for(int j = i + 1; j < 3; j++)
		{
			if(array[i] > array[j])
			{
				temp =array[j];
				array[j] = array[i];
				array[i] = temp;
			}	
		}	
	}
	cout << "排序为："  << array[0] << "," <<  array[1] << "," <<  array[2] << endl;	
}

int main()
{
	int s1 = 5, s2 = 9, s3 = 1;
	sort(s1, s2, s3);
}