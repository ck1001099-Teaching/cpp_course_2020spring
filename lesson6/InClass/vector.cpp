#include <iostream>
#include <vector>
using namespace std;

int main(){

	int arr[10];
	for (int i = 0 ; i < 10 ; i++){
		arr[i] = i * i;
	}
	for (int i = 0 ; i < 10 ; i++){
		cout << i << " " << arr[i] << endl;	
	}
	
	vector<int> vec;
	vec.push_back(100);
	cout << vec[0] << endl;

	return 0;
}