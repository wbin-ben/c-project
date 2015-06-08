#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str = "We are here!";
	cout << *find(str.begin(), str.end(), 'h') << endl;

	int i = str.find("h");
	cout << str.substr(i, 1) << endl;

	cout << str[7] << endl;

	cout << *find(&str[0], &str[str.length()], 'h') << endl;
}