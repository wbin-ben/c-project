#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
	string str1 = "Where are you?", str2("We are here!");
	string str = str1 +  " " + str2;
	cout << str << endl;
	char s1[] = {"Where are you!"};
	char s2[] = {"We are here!"};
	char str3[30]={""};
	int i, k ;
	for(i = 0, k = 0; str1[i] != '\0'; i++ ,k++)
		str3[k] = str1[i];	
	for(int i = 0; str2 [i]!= '\0'; i++, k++)
	{
		str3[k] = str2[i];
	}	
	cout << str3 <<endl;

	string str4 = "";
	copy(&str1[0], &str1[0] + 14, &str4[0]);
	copy(&str2[0], &str2[0] + 12, &str4[14]);
	//copy(str1[0], str1[0] + 14, str4[0]);
	copy(&str4[0], &str4[0] + 26, ostream_iterator<char>(cout)) ;
	cout << endl;
	//cout << str4.size() << endl;
	cout << (&str4[0])<< endl;
}