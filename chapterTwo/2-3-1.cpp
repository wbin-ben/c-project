#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "Where are you?", str2("We are here!");
	string str = str1 +  " " + str2;
	cout << str << endl;
	
	char c1[] = {"c++"},c2[] = {"program"};
	char c3[20]={""};
	int i,k;

	for(i=0,k=0;c1[i]!='\0';i++,k++)
		c3[k]=c1[i];

	for(i=0;c2[i]!='\0';i++,k++)
		c3[k]=c2[i];
	cout<< c3<< endl;

	char s1[] = {"Where"},s2[] = {"here!"};
	char s3[10] = {""};
	for(int i = 0, k = 0; s1[i] != '\0'; i++, k++)
		s3[k] = s1[i];

	for(int i = 0; s2[i] != '\0'; i ++, k ++)
		s3[k] = s2[i];
	cout << s3 << endl;
}