#include <iostream>
#include <string>
using namespace std;
void change(const string &);
int main(){
	string str("Can you change it?");
	change(str);
	cout << str << endl;
}
void change(const string &s1)
{
	string s2 =  s1 + "No !";
	cout << s2 << endl;
}