#include <iostream>
#include <vector>
using namespace std;

int main(){

	int arr[10] = {0};

	vector<int> v1;
	vector<double> v2;
	vector<int*> v3;
	vector< vector<int> > v4;

	v1.push_back(10);// -> [10]
	cout << v1.size() << endl;
	v1.push_back(20);// -> [10, 20]
	cout << v1.size() << endl;

	for (int i = 0 ; i < 10 ; i++){
		v1.push_back(0);
		v2.push_back(3.14);
	}
	cout << v1.size() << " " << v2.size() << endl;

	return 0;
}