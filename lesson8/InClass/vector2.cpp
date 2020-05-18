#include <iostream>
#include <vector>
using namespace std;

// 寫一個C++程式，輸入一些數字，並算出總和、平均、標準差。
// 輸入數字皆大於0，若輸入0，則輸出計算結果，並停止程式。

int main(){

	vector<int> v;

	int num;
	while (true){
		cin >> num;
		if (num == 0){
			break;
		}
		v.push_back(num);
	}

	int sum = 0;
	for (int i = 0 ; i < v.size() ; i++){
		sum = sum + v[i];
	}
	double mean = (double)sum / v.size();
	cout << "總和: " << sum << endl;
	cout << "平均: " << mean << endl;

	return 0;
}