#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "Where are you?", str2("We are here!");
	string str = str1 +  " " + str2;
	cout << str << endl;
	char s1[] = {"Where are you!"};
	char s2[] = {"We are here!"};
	string str3[25]={""};
	int i, k ;
	for(int i = 0, k = 0; str1[i] != '\0'; i++ ,k++)
		str3[k] = str1[i];
	for(int i = 0; str2 [i]!= '\0'; i++, k++)
		str3[k] = str2[i];
	cout << str3 <<endl;
}