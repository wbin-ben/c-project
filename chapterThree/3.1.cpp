#include <iostream>
#include <string>
using namespace std;
void swap(string, string);
int main()
{
	string str1("现在"), str2("过去");
	swap(str1, str2);
	cout << "返回后: str1 = " << str1 << " str2 = " << str2 << endl;
}
void swap(string str1, string str2)
{
	string temp = str1; str1 = str2; str2 = temp;
	cout << "交换为:str1 = " << str1 << " str2 = " << str2 << endl;
}