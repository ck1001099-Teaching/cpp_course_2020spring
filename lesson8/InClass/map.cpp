#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

	map<int, string> m1;
	m1[0] = "zero";
	m1[1] = "one";
	m1[2] = "two";
	m1[9] = "nine";
	//cout << m1[9] << endl;

	map<string, string> m2;
	m2["apple"] = "蘋果";
	m2["banana"] = "香蕉";
	//cout << m2["apple"] << endl;

	string fruit;
	cin >> fruit;
	cout << m2[fruit] << endl;


	return 0;
}