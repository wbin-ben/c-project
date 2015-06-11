#include <iostream>
#include <string>
using namespace std;

int strlen(char *str)
{
	int len = 0;
	while(str[len] !='\0')
	{
		len ++;
	}
	return len;
}

int main(){
	char str[]={"abcdefghijklmnopqrstuvwxyz"};
	cout<< str<<"----的长度："<< strlen(str)<< endl;
	cout << str << endl;
}