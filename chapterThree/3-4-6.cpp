#include <iostream>
using namespace std;

template <class T>
void sort(T a, T b, T c, T d)
{
	T array[3],temp;
	int i,j;

	array[0] = a;
	array[1] = b;
	array[2] = c;
	array[3] = d;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
	}
	cout<< array[0]<<" "<< array[1]<<" "<< array[2]<< " " << array[3] << endl;

}

int main()
{
	sort(5,10,9,2);
}